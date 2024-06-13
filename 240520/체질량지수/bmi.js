const fs = require('fs');

let input = fs.readFileSync(0).toString().split(" ");

let h = Number(input[0]);
let w = Number(input[1]);
let b = 10000 * w / h / h;

console.log(Math.floor(b));
if (b >= 25) console.log("Obesity");