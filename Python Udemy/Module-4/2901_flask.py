# flask => Used for Web-Devlopnment.
#           All flask-apps by default runs on port-5000.
import flask  

app = flask.Flask("Website")                               # (↓) Port-5000 from Line-2.
@app.route("/")  # Decorator => @. Route => http://127.0.0.1:5000 in Browser.
@app.route("/home/")  # Route => http://127.0.0.1:5000/home in Browser.
#                                                     (↑)
# Above, Both route's goes to 'Home()' function, because it is currently
#         directly below them.

def Home():
    return flask.render_template("2901_tutorial.html")  
    # '2901_tutorial.html' => In 'templates' folder.


@app.route("/about/")  # Goes to 'about()' function.
def about():
    return flask.render_template("2901_about.html")  


# app.run(debug=True) # debug will give errors if we have in Web-Page.
# (↑) By default runs on Port-5000

app.run(debug=True, port=5001) # Runs on Port-5001.
# Changing Ports is used to run Multiple-apps.