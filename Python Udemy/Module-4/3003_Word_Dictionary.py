# Imports "2903_word.html" from 'templates' folder.


import flask  
import pandas as pd 

app = flask.Flask(__name__)
@app.route("/")  

def Home():
    return flask.render_template("2903_word.html")  


data_frame = pd.read_csv("dictionary.csv")

@app.route("/<word>/") 
def api(word):
    Meaning = data_frame.loc[data_frame['word'] == word]['definition'].squeeze()
    return {"word": word,
            "definition": Meaning}

if __name__ == "__main__": 
    app.run(debug=True, port=5002)