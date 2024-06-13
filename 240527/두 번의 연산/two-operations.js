const fs = require("fs");

let arr = fs.readFileSync(0).toString();

let a = Number(arr)

if (a % 2 !== 0) a += 3;

if (a % 3 === 0) a /= 3;

console.log(a);