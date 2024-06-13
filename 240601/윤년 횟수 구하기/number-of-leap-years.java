import java.util.*;

    public class Main {
        public static void main(String[] args) {

            Scanner sc = new Scanner(System.in);

            int cnt = 0;

            int a = sc.nextInt();

            for (int i = 1; i <= a; i++) {
                if (i % 4 == 0) cnt++;
                if (i % 100 == 0 && i % 400 != 0) cnt--;
            }
            System.out.println(cnt);
        }
    }