const fs = require("fs");

let arr = fs.readFileSync(0).toString();

let a = Number(arr)

if (a >= 1) console.log("High")
else if (a >= 0.5) console.log("Middle")
else console.log("Low")