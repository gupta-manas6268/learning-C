# See y-axis of Graph carefully, every-time you change the slider of 
#   Forecast Days. (It will also multiply by that date. (Line-27))

import streamlit as st                                                # pyright: ignore
import plotly.express as px # px => plotly.express                    # pyright: ignore
# '.express' => function of 'plotly'.

import bokeh                                                          # pyright: ignore
# bokeh & plotly are for same purpose of plotting graphs.
# plotly is > (more) famous than bokeh.


st.title("Weather Forecast for the Next Days")
place = st.text_input("Place: ")
days = st.slider("Forecast Days", min_value=1, max_value=5,
                 help="Select the number of forecasted days")

option = st.selectbox("Select data to view", ("Tempearture", "Sky"))

st.subheader(f"Temperature for the next {days} days in {place.capitalize()}")

def get_data(days):
    dates = ["2022-25-10", "2022-26-10", "2022-27-10"]  # Fake Data in both lines 
    temperatures = [10, 11, 15]                         #  for understanding.

    temperatures = [days * i for i in temperatures]
    # (↑) if days = 2, then it will plot (y="temperatures" - axis),
    #                   for (days * max.(i => temperatures)) = (2 * 15).

    return dates, temperatures

Dates, Temperatures = get_data(days)
figure_1 = px.line(x=Dates, y=Temperatures, labels={"x": "Date", "y": "Temperature (Celsius)"})
#  labels = (x-y axis => "Date"-"Temperature" axis.) (↑)
# (↑) ('.line() => Plots graph in lines.)

figure_2 = px.scatter(x=Dates, y=Temperatures, labels={"x": "Date", "y": "Temperature (Celsius)"})
# (↑) ('.scatter() => Plots graph in dots.)

st.plotly_chart(figure_1)
st.plotly_chart(figure_2)