const fs = require('fs');

let arr = fs.readFileSync(0).toString().split(" ");

let a = Number(arr[0]);
let b = Number(arr[1]);

a += 8;
b *= 3;

console.log(a);
console.log(b);
console.log(a*b);