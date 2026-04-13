# Shows Data-Type & Respresentation of data in => json.
# But Data shown properly in => Raw Data.
# 
# 'Raw Data' better than 'json'.

import flask   

app = flask.Flask(__name__)
@app.route("/")  

def Home():
    return flask.render_template("2902_home.html")  


@app.route("/api/v1/<station>/<date>/") 
# <station> & <date> => <> because, user can change it. 
def about(station, date):
    temperature = 23
    station.upper()
    return {"station": station,
            "date": date,
            "temperature": temperature}  

if __name__ == "__main__": # App runs only when we run this file, but
    app.run(debug=True)    #  didn't run when we import  & run it in
                           #  another file.