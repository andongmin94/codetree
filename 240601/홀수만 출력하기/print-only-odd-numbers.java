import java.util.*;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        
        while(a-- > 0) {
            int b = sc.nextInt();
            if (b % 2 != 0 && b % 3 == 0)
                System.out.println(b);
        }
    }
}