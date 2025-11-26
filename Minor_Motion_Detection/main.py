# Capture Image
import cv2 # pyright: ignore
import time
import glob


# Send-Email
import smtplib
import filetype                          # pyright: ignore
from email.message import EmailMessage
import os
from dotenv import load_dotenv         # pyright: ignore


load_dotenv()
PASSWORD = os.getenv("Email_API_Key")
SENDER = os.getenv("SENDER_Email_Address")
RECEIVER = os.getenv("RECEIVER_Email_Address")

def Gmailing(Image_Location):
    print("Email function is started")

    Message = EmailMessage()
    Message["Subject"] = "Intruder is in frame"
    Message.set_content("Intruder is in frame1.")

    with open(Image_Location, "rb") as file: 
    # "rb" => read-binary, because it is an image.
        content = file.read()

    # Detect image type (replaces imghdr.what)
    kind = filetype.guess(content)
    if kind is None:
        raise ValueError("Can't give image file")
    
    # Add file
    Message.add_attachment(
        content,
        maintype="image",
        subtype=kind.extension 
    )

    gmail = smtplib.SMTP("smtp.gmail.com", 587) # 587 => Port of gmail
    gmail.ehlo()
    gmail.starttls()
    gmail.login(SENDER, PASSWORD)
    gmail.sendmail(SENDER, RECEIVER, Message.as_string())
    gmail.quit()

    print("Email function ended")



# Capture Image
video = cv2.VideoCapture(0)
time.sleep(5)

init_frame = None # init => initial
status_list = []
sent_Email = False  

def clean_folder(): # clean 'image' folder.
    images = glob.glob("images/*.png")
    for image in images:
        os.remove(image)

count = 1
while True:
    object = 0 # 0 => No object enters frame.
    is_object, frame = video.read()

    # 1.
    Gray_Scale_Frame = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    Gray_Gaussian = cv2.GaussianBlur(Gray_Scale_Frame, (21, 21), 0)
    cv2.imshow("1.Blurred Gray-Scale", Gray_Gaussian)  # blurred grayscale image

    if init_frame is None:
        init_frame = Gray_Gaussian

    # 2.
    Difference_Frame = cv2.absdiff(init_frame, Gray_Gaussian) # difference from first static frame
    Max_Change = cv2.threshold(Difference_Frame, 60, 255, cv2.THRESH_BINARY)[1] # threshold mask showing motion as white
    dilated_frame = cv2.dilate(Max_Change, None, iterations=2) # dilated mask for stronger motion region

    # 3.
    countours, is_object = cv2.findContours(dilated_frame, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
    for countour in countours:
        if cv2.contourArea(countour) < 5000:
            continue
        x, y, width, height = cv2.boundingRect(countour)
        rectangle = cv2.rectangle(frame, (x, y), (x + width, y + height), (0, 270, 0), 3)

        if rectangle.any():
            object = 1

            if not sent_Email:    # Send Email when Object enters
                cv2.imwrite("new_object.png", frame)
                Gmailing("new_object.png")
                sent_Email = True 
                print("Email sent!")

    status_list.append(object)
    status_list = status_list[-2:]

    # Object reseting
    if object == 0:
        sent_Email = False

    cv2.imshow("3.Object Detection", frame)  

    key = cv2.waitKey(1)
    if key == ord("B"):
        break

video.release()
cv2.destroyAllWindows()
