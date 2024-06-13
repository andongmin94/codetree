import java.util.*;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        
        int k = 3;
        int cnt = 0;
        
        while (k > 0) {
            k--;
            String s = sc.next();
            char a = s.charAt(0);
            int b = sc.nextInt();
            
            if (a == 'Y' && b >= 37) cnt++;
        }
        
        if (cnt >= 2) System.out.println("E");
        else System.out.println("N");
    }
}