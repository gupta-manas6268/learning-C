import flask   

app = flask.Flask(__name__)
@app.route("/")  

def Home():
    return flask.render_template("2903_word.html")  


@app.route("/api/v1/<word>/") 
def api(word):
    Word = word.upper()
    return {"word": word,
            "definition": Word}

if __name__ == "__main__": 
    app.run(debug=True, port=5002)