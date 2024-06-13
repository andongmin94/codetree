const fs = require('fs');

let arr = fs.readFileSync(0).toString().split("\n");

let a = arr[0]
let b = arr[1]

console.log(b)
console.log(a)