const fs = require("fs");

let input = fs.readFileSync(0).toString().split(" ").map(Number);

// 정렬 후 중앙값 찾기
input.sort((a, b) => a - b);

console.log(input[1]);