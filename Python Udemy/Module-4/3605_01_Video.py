import cv2 # pyright: ignore
import time

video = cv2.VideoCapture(0)

while True:
    time.sleep(1) # 1-Frame per Second Video.

    check, frame = video.read()
    cv2.imshow("My Video", frame)
    # '.imshow' => Shows 'video'.

    key = cv2.waitKey(1)

    if key == ord("q"): # => Stops Camera by Pressing 'q'.
    # if key == ord("axy"):  # => Stops Camera by Pressing 'axy'.
        break


video.release()