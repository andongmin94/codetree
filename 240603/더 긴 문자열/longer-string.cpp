import java.util.*;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        String s2 = sc.next();

        System.out.println(s.length() > s2.length() ? s + " " + s.length() : s2 + " " + s2.length());

    }
}