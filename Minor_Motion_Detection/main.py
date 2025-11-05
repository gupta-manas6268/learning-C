import cv2 # pyright: ignore
import time
import glob
import os
from emailing_3701 import send_email

video = cv2.VideoCapture(0)
time.sleep(1)

first_frame = None
status_list = []
sent = False  # NEW

def clean_folder(): # clean 'image' folder.
    images = glob.glob("images/*.png")
    for image in images:
        os.remove(image)

count = 1
while True:
    status = 0 # 0 => No object enters frame.
    check, frame = video.read()

    # 1.
    Gray_Frame = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    Gray_Frame_Gau = cv2.GaussianBlur(Gray_Frame, (21, 21), 0)
    cv2.imshow("1.Gray-Scale Blur Video", Gray_Frame_Gau)  # blurred grayscale image

    if first_frame is None:
        first_frame = Gray_Frame_Gau

    # 2.
    Delta_Frame = cv2.absdiff(first_frame, Gray_Frame_Gau)
    cv2.imshow("2.Delta Video", Delta_Frame)  # difference from first static frame

    # 3.
    Threshold_Frame = cv2.threshold(Delta_Frame, 60, 255, cv2.THRESH_BINARY)[1]
    cv2.imshow("3.Threshold Video", Threshold_Frame)  # threshold mask showing motion as white

    # 4.
    dil_frame = cv2.dilate(Threshold_Frame, None, iterations=2)
    cv2.imshow("4.Dil video", dil_frame)  # dilated mask for stronger motion region

    # 5.
    countours, check = cv2.findContours(dil_frame, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
    for countour in countours:
        if cv2.contourArea(countour) < 5000:
            continue
        x, y, width, height = cv2.boundingRect(countour)
        rectangle = cv2.rectangle(frame, (x, y), (x + width, y + height), (0, 255, 0), 3)

        if rectangle.any():
            status = 1

            if not sent:    # ✅ send instantly on entry
                cv2.imwrite("object.png", frame)
                send_email("object.png")
                sent = True 
                print("Email sent!")

    status_list.append(status)
    status_list = status_list[-2:]

    # reset for next entry
    if status == 0:
        sent = False

    cv2.imshow("5.Webcam detecting moving Objects in Rectangle", frame)  # final output feed

    key = cv2.waitKey(1)
    if key == ord("q"):
        break

video.release()
cv2.destroyAllWindows()
