const fs = require('fs');

let arr = fs.readFileSync(0).toString().split("\n");

let a = arr[0]
let b = (Number(arr[1])).toFixed(2);
let c = (Number(arr[2])).toFixed(2);


console.log(a)
console.log(b)
console.log(c)