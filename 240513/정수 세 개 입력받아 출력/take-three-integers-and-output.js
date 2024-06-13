const fs = require("fs")

let arr = fs.readFileSync(0).toString().split("\n");

let arr2 = arr[0].split(" ")

let a = Number(arr2[0]);
let b = Number(arr2[1]);
let c = Number(arr[1]);

console.log(a, b, c);