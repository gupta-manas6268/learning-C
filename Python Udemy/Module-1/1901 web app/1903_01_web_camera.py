import streamlit as st
# import PIL as pillow      # PIL => 'Pillow' module.
from PIL import Image       # Image => 'class' with various functions.
# (↑) It imports 'Image' class from 'PIL' module.




# Start the camera
camera_image = st.camera_input("Camera")
print(camera_image)

if camera_image != None:  # Both lines work well.
# if camera_image: 
# (↑) To avoid 'NoneType' AttributeError, because without 'if' conditional, code 
#  will run simultanesouly our Browser asking permission for camera & without
#  any image it will give 'NoneType' error, because 'camera_image' has nothing
#  in it.

    # Create a pillow image instance
    img = Image.open(camera_image) # img => image
    gray_img = img.convert("L")    # .convert("L") => convert image to gray scale.

    # Show the grayscale image on the webpage.
    st.image(gray_img)