# See 'Simple Backed_3301.py' & try to make your 
#  own code.



# Updated from '3201_Static_Weather_Forecast.py'.

import streamlit as st
import plotly.express as px 
import Final_Backend_3301

st.title("Weather Forecast for the Next Days")
place = st.text_input("Place: ")
days = st.slider("Forecast Days", min_value=1, max_value=5,
                 help="Select the number of forecasted days")

option = st.selectbox("Select data to view", ("Temperature", "Sky"))

st.subheader(f"Temperature for the next {days} days in {place.capitalize()}")

if place: # Runs when user provides a place.
    try:
        # Get the Temperature/Sky data.
        filtered_data = Final_Backend_3301.get_data(place, days)

        if option == "Temperature":
            temperatures = [dict["main"]["temp"] / 10 for dict in filtered_data] 
            # (↑) for-loop => through 'dict["main"]["temp"]' Variable 
            #                  in Dictionary.
            # (↑) "temp" => temperature.
            # 
            # (dict["main"]["temp"] / 10) => divide by 10, because gives 
            #                   Temperature 10-times the Original value.

            dates = [dict["dt_txt"] for dict in filtered_data]
            # dict["dt_txt"] in filtered_data => Gives date-time.

            figure = px.line(x=dates, y=temperatures, labels={"x": "Date", "y": "Temperature (C)"})
            st.plotly_chart(figure)

        elif option == "Sky":
            sky_conditions = [dict["weather"][0]["main"] for dict in filtered_data]

            images = {"Clear":"Weather Images/clear.png", "Clouds":"Weather Images/cloud.png",
                      "Rain":"Weather Images/rain.png", "Snow":"Weather Images/snow.png"}
            image_paths = [images[condition] for condition in sky_conditions]
            # (↑) image_paths => List with paths of all images to display in Browser.

            st.image(image=image_paths, width=115)

    except KeyError:
        st.write(f"{place.capitalize()} does not exist. \
                      Please enter valid Place.")