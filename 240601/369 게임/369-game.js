const fs = require("fs");

let input = fs.readFileSync(0).toString();

let a = Number(input);

for (let i = 1; i <= a; i++) {
    if (i % 3 === 0 || i % 10 === 3 || i % 10 === 6 || i % 10 === 9 || parseInt(i / 10) === 3 || parseInt(i / 10) === 6 || parseInt(i / 10) === 9) {
        process.stdout.write(0 + " ");
    } else process.stdout.write(i + " ");
}