import java.util.*;

public class Main {
    public static void main(String[] args) {

        int a = 5, b = 6, c = 7;
        int temp_b = b, temp_c = c;
        
        b = a;
        c = temp_b;
        a = temp_c;
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
    }
}