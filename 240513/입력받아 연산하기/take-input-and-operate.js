const fs = require('fs');

let arr = fs.readFileSync(0).toString().split("\n");

let a = Number(arr[0]);
let b = Number(arr[1]);

a += 87;
b %= 10;

console.log(a);
console.log(b);