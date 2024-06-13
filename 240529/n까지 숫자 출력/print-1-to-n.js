const fs = require('fs');

let input = fs.readFileSync(0).toString();

let a = Number(input);

let b = 1;

while(b <= a) {
    process.stdout.write(b + " ")
    b++;
}