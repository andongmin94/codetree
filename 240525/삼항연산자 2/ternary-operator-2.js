const fs = require('fs');

let arr = fs.readFileSync(0).toString()

let a = Number(arr[0]);

console.log(a == 1 ? "t" : "f")