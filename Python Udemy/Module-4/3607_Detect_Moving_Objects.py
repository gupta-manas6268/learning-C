# See All 5-Video Frames carefully & understand them.






import cv2
import time

video = cv2.VideoCapture(0)
time.sleep(1)

first_frame = None
while True:
    check, frame = video.read()

    # 1.
    Gray_Frame = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    Gray_Frame_Gau = cv2.GaussianBlur(Gray_Frame, (21, 21), 0)
    cv2.imshow("1.Gray-Scale Blur Video", Gray_Frame_Gau)

    # if first_frame == None: # Error
    if first_frame is None:
        first_frame = Gray_Frame_Gau

    # 2.
    Delta_Frame = cv2.absdiff(first_frame, Gray_Frame_Gau)
    cv2.imshow("2.Delta Video", Delta_Frame)
    
    # 3.
    Threshold_Frame = cv2.threshold(Delta_Frame, 60, 255, cv2.THRESH_BINARY)[1]
    # [1] => because, It is a List & we want to access from 2nd-item     (↑)
    #         of List, because 'first_frame' is static.
    # 
    # (60, 255) => Min. value '60' in Matrix 'Delta_Frame' to detect Change 
    #               in Image & then Change it [255, 255, 255] = [B:G:R],
    #           i.e. Change it to White colour.
    cv2.imshow("3.Threshold Video", Threshold_Frame)

    # 4.
    dil_frame = cv2.dilate(Threshold_Frame, None, iterations=2)
    cv2.imshow("4.Dil video", dil_frame)

    # 5.
    countours, check = cv2.findContours(dil_frame, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
    for countour in countours:
        if cv2.contourArea(countour) < 5000:
        # i.e. didn't do anything if less than 5000-pixels of area 
        #       is changed in Video.
            continue
        x, y, width, height = cv2.boundingRect(countour)
        cv2.rectangle(frame, (x, y), (x + width, y + height), (0, 255, 0), 3)
        # '.rectangle()' => Puts Rectangle in 'frame' Video, from (x, y) to 
        #               (x + width, y + height).

    cv2.imshow("5.Webcam detecting moving Objects in Rectangle", frame)

    key = cv2.waitKey(1)

    if key == ord("q"):
        break


video.release()