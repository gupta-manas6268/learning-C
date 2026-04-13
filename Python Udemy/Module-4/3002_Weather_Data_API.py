# Modified from code of '2902_Weather_API.py'.
# Imports "3002_home.html" from 'templates' folder.

import flask   
import pandas as pd

app = flask.Flask(__name__)

stations = pd.read_csv("data_small/stations.txt", skiprows=17) # Gives full Table.
stations = stations[["STAID", "STANAME                                 "]] # Comment & Run.
# Only gives "STAID" & "STANAME", Columns in Table.

@app.route("/")  
def Home():
    return flask.render_template("3002_weather.html", data=stations.to_html())
    # '.to_html()' => Converts data for '.html' file.


@app.route("/api/v1/<station>/<date>/") 
def about(station, date):
    file_name = "data_small\TG_STAID" + str(station).zfill(6) + ".txt"
    # '.zfill(6)' => If filles no. in 6-digit string.
    #  Ex: str(99).zfill(6) => 000099.

    data_frame = pd.read_csv(file_name, skiprows=20, parse_dates=["    DATE"])
    temperature = data_frame.loc[data_frame['    DATE'] == date]['   TG'].squeeze() / 10

    return {"station": station,
            "date": date,
            "temperature": temperature}  

if __name__ == "__main__": 
    app.run(debug=True)    