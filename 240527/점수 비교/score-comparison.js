const fs = require("fs");

// 전체 입력을 한 번에 읽고, 줄 단위로 나눕니다.
let input = fs.readFileSync(0).toString().trim().split("\n");

// 각 줄을 다시 공백으로 나누어 숫자 배열로 만듭니다.
let arr1 = input[0].split(" ").map(Number);
let arr2 = input[1].split(" ").map(Number);

// 변수에 값을 할당합니다.
let a = arr1[0];
let b = arr1[1];
let c = arr2[0];
let d = arr2[1];

// 조건을 비교합니다.
if (a > c && b > d) {
  console.log(1);
} else {
  console.log(0);
}