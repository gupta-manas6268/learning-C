# Updated from '3201_Static_Weather_Forecast.py'.

import streamlit as st
import plotly.express as px 
import Backend_3301

st.title("Weather Forecast for the Next Days")
place = st.text_input("Place: ")
days = st.slider("Forecast Days", min_value=1, max_value=5,
                 help="Select the number of forecasted days")

option = st.selectbox("Select data to view", ("Tempearture", "Sky"))

st.subheader(f"Temperature for the next {days} days in {place.capitalize()}")

data = Backend_3301.get_data(place, days, option)

Dates, Temperatures = get_data(days)
figure_1 = px.line(x=Dates, y=Temperatures, labels={"x": "Date", "y": "Temperature (Celsius)"})
#  labels = (x-y axis => "Date"-"Temperature" axis.) (↑)
# (↑) ('.line() => Plots graph in lines.)

figure_2 = px.scatter(x=Dates, y=Temperatures, labels={"x": "Date", "y": "Temperature (Celsius)"})
# (↑) ('.scatter() => Plots graph in dots.)

st.plotly_chart(figure_1)
st.plotly_chart(figure_2)