// Run 'nodemon index_2.js' in terminal.


import express from "express";
const app = express();
const port = 3000;

app.listen(port, () => {
    console.log("Server running on port 3000.");
})

app.get("/", (req, res) => {         // Do 'http://localhost:3000/'.
    res.send("<h1>Home Page</h1>");
});

app.get("/about", (req, res) => {    // Do 'http://localhost:3000/about'.
    res.send("<h1>About Me</h1><p>My name is Manas</p>");
});

app.get("/contact", (req, res) => {  // Do 'http://localhost:3000/contact'.
    res.send("<h1>Contact Me</h1><p>Phone: +4448494849</p>");
});

// app.listen(port, () => {
//     console.log("Server running on port 3000.");
// })