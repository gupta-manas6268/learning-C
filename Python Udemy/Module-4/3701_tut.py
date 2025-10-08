import cv2 # pyright: ignore
import time
import glob
from emailing_3701 import send_email

video = cv2.VideoCapture(0)
time.sleep(1)

first_frame = None
status_list = []

count = 1
while True:
    status = 0 # 0 => No object enters frame.
    check, frame = video.read()

    # 1.
    Gray_Frame = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    Gray_Frame_Gau = cv2.GaussianBlur(Gray_Frame, (21, 21), 0)
    # cv2.imshow("1.Gray-Scale Blur Video", Gray_Frame_Gau)

    if first_frame is None:
        first_frame = Gray_Frame_Gau

    # 2.
    Delta_Frame = cv2.absdiff(first_frame, Gray_Frame_Gau)
    # cv2.imshow("2.Delta Video", Delta_Frame)
    
    # 3.
    Threshold_Frame = cv2.threshold(Delta_Frame, 60, 255, cv2.THRESH_BINARY)[1]
    # cv2.imshow("3.Threshold Video", Threshold_Frame)

    # 4.
    dil_frame = cv2.dilate(Threshold_Frame, None, iterations=2)
    # cv2.imshow("4.Dil video", dil_frame)

    # 5.
    countours, check = cv2.findContours(dil_frame, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
    for countour in countours:
        if cv2.contourArea(countour) < 5000:
        # i.e. didn't do anything if less than 5000-pixels of area 
        #       is changed in Video.
            continue
        x, y, width, height = cv2.boundingRect(countour)
        rectangle = cv2.rectangle(frame, (x, y), (x + width, y + height), (0, 255, 0), 3)

        if rectangle.any():
            # .any() => Because 'rectangle' is 2-Dimensional Matrix, so
            #            we use it for both checking any dimension of rectangle.

            status = 1 # 1 => object enters frame.

            cv2.imwrite(f"images/{count}.png", frame)
            count = count + 1
            all_images = glob.glob("images/*.png")
            index = int(len(all_images) / 2)
            image_with_object = all_images[index] # Middle image

    status_list.append(status)
    status_list = status_list[-2:]
    # [-2:] => Gives only Last-2 'status_list' values.
    print(status_list)
    
    if status_list[0] == 1 and status_list[1] == 0:
    # i.e. when object removes from the frame.
        send_email(image_with_object)

    cv2.imshow("5.Webcam detecting moving Objects in Rectangle", frame)

    key = cv2.waitKey(1)

    if key == ord("q"):
        break


video.release()