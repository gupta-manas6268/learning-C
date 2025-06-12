const fs = require("fs");

fs.writeFile("message.txt", "Hello from NodeJS!", (err) => {
    if(err) throw err;
    console.log("The file has been saved!");
});

fs.readFile("./message.txt", "utf8", (err, data) => {  // "./message.txt" -> is path of the 'txt' file.
    if(err) throw err;             // "utf8" -> is used to decode the text message in 'txt' file.
    console.log(data);
})