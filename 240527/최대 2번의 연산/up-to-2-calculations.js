const fs = require("fs");

let arr = fs.readFileSync(0).toString();

let a = Number(arr)

if (a % 2 === 0) a /= 2;

if (a % 2 !== 0) a = (a + 1) / 2;

console.log(a);