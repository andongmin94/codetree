const fs = require("fs");

let input = fs.readFileSync(0).toString();

let a = Number(input);

for (let i = a; i > 0; i--) {
    process.stdout.write(i + " ");
}