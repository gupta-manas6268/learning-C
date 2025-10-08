# Normal 'BGR' Frames have 3-values [B:G:R], but Gray-Scale Frames
#  have only one value [GrayScale]. So, it saves Memory. (for Algorithms)


import cv2 # pyright: ignore
import time

video = cv2.VideoCapture(0)
time.sleep(1)

while True:
    check, frame = video.read()

    Gray_Frame = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    # '.cvtColor(frame, cv2.COLOR_BGR2GRAY) => Converts Normal-Frame
    #                                   to Gray-Scale Frame.

    # (↓)       (21, 21), 0 => (21, 21) is Amount of Blurness.
    #                    (↑) 0 => is Standard Deviation.
    Gray_Frame_Gau = cv2.GaussianBlur(Gray_Frame, (21, 21), 0)
    # '.GaussianBlur()' => Used to Blur Image for Data usage Reduction.
    
    cv2.imshow("Gray-Scale Blur Video", Gray_Frame_Gau)

    key = cv2.waitKey(1)

    if key == ord("q"):
        break


video.release()