// ".cjs" -> common javascript. (extension) to run this file
//   properly.

var generateName = require("sillyname")
var sillyname = generateName();

console.log(`My name is ${sillyname}.`);