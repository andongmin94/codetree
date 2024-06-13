const fs = require("fs")

let input = fs.readFileSync(0).toString().split("\n");

let a = (input[0].split(" "))[0];
let b = (input[0].split(" "))[1]
let c = (input[1].split(" "))[0];
let d = (input[1].split(" "))[1];

if (a > c) console.log("A");
else if (c > a) console.log("B");
else if (a === c && b > d) console.log("A");
else if (a === c && b < d) console.log("B");