const fs = require('fs');

let arr = fs.readFileSync(0).toString().split(" ");

let a = Number(arr[0]);

if (a >= 113) console.log(1);
else console.log(0);