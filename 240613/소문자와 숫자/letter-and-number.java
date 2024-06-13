import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // 문자열을 정의합니다.
        String str;
        
        // 문자열을 입력받습니다.
        str = sc.next();
        
        // 문자열의 길이를 구합니다.
        int len = str.length();

        // 문자를 하나하나 확인하여 알파벳일 경우 모두 소문자로, 숫자일 경우 그대로 출력합니다.
        for(int i = 0; i < len; i++) {
            if(str.charAt(i) >= 'A' && str.charAt(i) <= 'Z') {
                System.out.print((char)(str.charAt(i) - 'A' + 'a'));
            }

            if(str.charAt(i) >= 'a' && str.charAt(i) <= 'z') {
                System.out.print(str.charAt(i));
            }
            
            if(str.charAt(i) >= '0' && str.charAt(i) <= '9') {
                System.out.print(str.charAt(i));
            }
        }
    }
}