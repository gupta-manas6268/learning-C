import cv2 # pyright: ignore
import streamlit as st # pyright: ignore
from datetime import datetime

st.title("Motion Detector")
start = st.button("Start Camera")

if start:
    streamlit_image = st.image([])
    camera = cv2.VideoCapture(0)

    while True:
        check, frame = camera.read()
        frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        # .COLOR_BGR2RGB => coverts 'BGR' frames to 'RGB' format.

        # Get current time as datetime object.
        now = datetime.now()
        cv2.putText(img=frame, text=now.strftime("%A"), org=(30, 80),
                    fontFace=cv2.FONT_HERSHEY_PLAIN, fontScale=3, 
                    color=(255, 255, 255), thickness=2, lineType=cv2.LINE_AA)
        cv2.putText(img=frame, text=now.strftime("%H:%M:%S"), org=(30, 140),
                    fontFace=cv2.FONT_HERSHEY_PLAIN, fontScale=3, 
                    color=(255, 0, 0), thickness=2, lineType=cv2.LINE_AA)
        
        streamlit_image.image(frame)

