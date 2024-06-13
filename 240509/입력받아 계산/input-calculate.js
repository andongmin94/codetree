const readline = require("readline");

// readline 인터페이스를 생성합니다.
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// 한 줄 입력을 기다립니다.
rl.question("", (answer) => {
    // 입력된 값을 숫자로 변환합니다.
    const input = Number(answer);

    // 결과를 출력합니다.
    console.log(input + 2);

    // readline 인터페이스를 닫습니다.
    rl.close();
});