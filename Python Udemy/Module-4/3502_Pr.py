# Q.: Plot Positivity & Negativity Graph by streamlit
#      by using '.txt' files from 'diary' folder, in 
#      this directory.





































import glob
import streamlit as st
import plotly.express as px
import nltk
from nltk.sentiment import SentimentIntensityAnalyzer


st.title("Diary Tone")
filenames = glob.glob("./diary/*.txt")

Positivity = []
Negativity = []
index = []
Dates = []
i = 1
analyzer = SentimentIntensityAnalyzer()
analyzer.polarity_scores("Hey, look how beautiful the trees are. I love them.")
for filename in filenames:
    with open(filename, 'r') as file:
        temp = file.read()
        polarity = analyzer.polarity_scores(temp)
        Positivity.append(polarity["pos"])
        Negativity.append(polarity["neg"])

        date = filename.strip(".txt").strip("\diary/")
        # (↑) When it becomes like "2023-10-21", then
        #    it will automatically convert to date-time
        #    format i.e. "Oct 21 2023" format. 
        Dates.append(date)

        index.append(i)
        i += 1

st.subheader("Positivity")
figure_1 = px.line(x=Dates, y=Positivity, labels={"x": "Date", "y": "Positivity"})
st.plotly_chart(figure_1)

st.subheader("Negativity")
figure_2 = px.line(x=Dates, y=Negativity, labels={"x": "Date", "y": "Negativity"})
st.plotly_chart(figure_2)