const fs = require("fs");

let arr = fs.readFileSync(0).toString();

let a = Number(arr)

if (a >= 3000) console.log("book")
else if (a >= 1000) console.log("mask")
else if (a >= 500) console.log("pen")
else console.log("no")