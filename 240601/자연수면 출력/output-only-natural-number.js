const fs = require("fs");

let input = fs.readFileSync(0).toString().split(" ");

let a = Number(input[0]);
let b = Number(input[1]);

if (a > 0) {
    for(let i = 0; i < b; i++) {
        process.stdout.write(a);
    }
} else {
    console.log(0)
}