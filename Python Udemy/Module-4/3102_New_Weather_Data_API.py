# (CR => Comment & Run)
# (UR => Uncomment & Run)





# Modified from code of '3002_Weather_API.py'.
# Imports "3102_home.html" from 'templates' folder.

import flask   
import pandas as pd

app = flask.Flask(__name__)

stations = pd.read_csv("data_small/stations.txt", skiprows=17) # Gives full Table.
stations = stations[["STAID", "STANAME                                 "]] # Comment & Run.
# Only gives "STAID" & "STANAME", Columns in Table.

@app.route("/")  
def Home():
    return flask.render_template("3102_weather.html", data=stations.to_html())
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


@app.route("/api/v1/<station>/")
def all_data(station):
    file_name = "data_small\TG_STAID" + str(station).zfill(6) + ".txt"
    data_frame = pd.read_csv(file_name, skiprows=20, parse_dates=["    DATE"])

    # result = data_frame.to_dict()  # UR => Not in a Good Table-Format.
    # '.to_dict()' => Converts Table data in Dictionary.

    result = data_frame.to_dict(orient="records") # (CR => Comment & Run)
    # (orient="records") => Shows data in a type of Table-Format in Dictionary,
    #                        where, one row = Dictionary of Dictionary. 
    #                   (=> in 'Raw Data' of Browser.)

    return result


@app.route("/api/v1/yearly/<station>/<year>/") 
def yearly(station, year): # Here, year => integer
    file_name = "data_small\TG_STAID" + str(station).zfill(6) + ".txt"

    # data_frame = pd.read_csv(file_name, skiprows=20, parse_dates=["    DATE"]) # Error
    # (↑) 'parse_dates', converts "    DATE" into Python date-time object,
    #           which will give erro in code.

    data_frame = pd.read_csv(file_name, skiprows=20)
    data_frame["    DATE"] = data_frame["    DATE"].astype(str)
    # '.astype(str)' => Converts current "DATE" column into String 
    #                    of that Table of Station.

    result = data_frame[data_frame["    DATE"].str.startswith(str(year))]
    # '.str.startswith' => Prints all Rows in Table in with same year, 
    #                       by '.startswith()' which checks strings.

    result = result.to_dict(orient="records") # UR

    return result
     

if __name__ == "__main__": 
    app.run(debug=True, port=5010)    