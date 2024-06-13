import java.util.*;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();

        if (a == 9) System.out.println(30);
        else if (a == 10 || a == 12) System.out.println(31);
        else if (a == 11) System.out.println(30);
        else if (a % 2 == 1 || a == 8) System.out.println(31);
        else if (a % 2 == 0 && a != 2) System.out.println(30);
        else System.out.println(28);
    }
}