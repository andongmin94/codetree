const fs = require("fs")

let input = fs.readFileSync(0).toString().split("\n");

let a = (input[0].split(" "))[0];
let b = (input[0].split(" "))[1]
let c = (input[1].split(" "))[0];
let d = (input[1].split(" "))[1];

if (a >= 19 && b === 'M' || c >= 19 && d === 'M') console.log(1)
else console.log(0)