const fs = require("fs")

let input = fs.readFileSync(0).toString()

let a = Number(input);

if (a >= 3 && a <= 5) console.log("Spring");
if (a >= 6 && a <= 8) console.log("Summer");
if (a >= 9 && a <= 11) console.log("Fall");
if (a >= 12 || a <= 2) console.log("Winter");