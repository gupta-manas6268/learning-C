import cv2 # pyright: ignore
import time

video = cv2.VideoCapture(0)
# (0) => because we are (↑) using main camera.
# If we have Multiple Camera's then, we can
#  also put '.VideoCapture(1)', '.VideoCapture(2)', etc,
#  to use other Camera's.

print("1st Frame")
check_1, frame_1 = video.read()
# frame_1 => 1st Image in video.
print(check_1) # => True.
print(frame_1) # => 1-Image.

print("2nd Frame")
time.sleep(1) # After 1sec.
check_2, frame_2 = video.read()
print(frame_2) 

print("3rd Frame")
time.sleep(1) # After 1sec.
check_3, frame_3 = video.read()
print(frame_3) 