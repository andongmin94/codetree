const fs = require('fs');

let arr = fs.readFileSync(0).toString().split(" ");

let a = Number(arr[0]);

if (a >= 80) console.log("pass");
else console.log(80 - a + " more score");