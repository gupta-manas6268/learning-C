// There are 7-Screenshot notes in this Lecture.



// Type 'localhost:3000' in browser to see O/P in all three I/P.
// Run both 'node index_1.js' and 'nodemon index_1.js' in terminal.

import express from "express";
const app = express();
const port = 3000;

app.get("/", (req, res) => {
    console.log(req);
    console.log(req.rawHeaders);
    res.send("Hello, World!");
    // res.send("<h1>Hello</h1>");
});

app.listen(port, () => {
    console.log(`Server running on port ${port}.`);
});