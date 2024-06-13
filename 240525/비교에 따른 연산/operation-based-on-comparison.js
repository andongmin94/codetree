const fs = require('fs');

let arr = fs.readFileSync(0).toString().split(" ")

let a = Number(arr[0]);
let b = Number(arr[1]);

if (a > b) console.log(a * b);
else console.log(parseInt(b/a));