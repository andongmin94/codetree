import java.util.*;

    public class Main {
        public static void main(String[] args) {

            Scanner sc = new Scanner(System.in);

            int a = sc.nextInt();
            int cl = 0, fl = 0, wl = 0;
            for (int i = 1; i <= a; i++) {
                if (i % 2 == 0) cl++;
                if (i % 3 == 0) fl++;
                if (i % 2 == 0 && i % 3 == 0) cl--;
                if (i % 12 == 0) {
                    wl++;

                    fl--;
                }
            }
            System.out.println(cl + " " + fl + " " + wl);
        }
    }