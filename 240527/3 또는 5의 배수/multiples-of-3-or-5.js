const fs = require("fs");

let arr = fs.readFileSync(0).toString();

let a = Number(arr)

if (a % 3 === 0) console.log("YES");
else console.log("NO");

if (a % 5 === 0) console.log("YES");
else console.log("NO");