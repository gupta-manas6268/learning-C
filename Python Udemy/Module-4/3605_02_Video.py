# Same of '3605_01_Video.py', with 'time.sleep(1)'
#  outside while-loop.

import cv2
import time

video = cv2.VideoCapture(0)
time.sleep(1) # Outside 'while' loop => Gives a Good-Video.

while True:

    # See, check true
    check, frame = video.read()
    cv2.imshow("My Video", frame)

    key = cv2.waitKey(1)
    # '.waitKey' => words we type when a video is Playing.

    if key == ord("q"): 
        break


video.release()