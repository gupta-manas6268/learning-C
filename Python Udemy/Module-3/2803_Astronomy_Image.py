import streamlit as st  
import requests
import os
from dotenv import load_dotenv

# Load environment variables from '.env' file
load_dotenv()

# api_key = "" # Take it from Bitwarden of 'NASA'.
api_key = os.getenv("NASA_API_KEY") 

url = "https://api.nasa.gov/planetary/apod?" \
        f"api_key={api_key}"

response_1 = requests.get(url)
data = response_1.json()

# Extract the image, title, url, & explanation
title = data["title"]
image_url = data["url"]
explanation = data["explanation"]

# Download image
image_filepath = "image_2.png"
response_2 = requests.get(image_url)
with open(image_filepath, "wb") as file:
    file.write(response_2.content)

st.title(title)
st.image(image_filepath)
st.write(explanation)