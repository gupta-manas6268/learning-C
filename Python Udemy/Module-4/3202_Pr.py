# Connected to 'happy.csv'.

import streamlit as st
import pandas as pd
import plotly.express as px 


st.title("In Search for Happiness")
x_axis = st.selectbox("Select the data for the X-axis", ("gdp", "happiness", "generosity"))
y_axis = st.selectbox("Select the data for the Y-axis", ("gdp", "happiness", "generosity"))

st.subheader(f"{x_axis} and {y_axis}")

data_frame = pd.read_csv(r"happy.csv")

figure = px.scatter(data_frame, x=f"{x_axis}", y=f"{y_axis}", labels={"x": f"{x_axis}", "y": f"{y_axis}"})
st.plotly_chart(figure)