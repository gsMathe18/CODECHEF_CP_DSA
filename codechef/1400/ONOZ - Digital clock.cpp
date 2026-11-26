import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            int H = sc.nextInt();
            int M = sc.nextInt();

            int count = 0;

            for (int h = 0; h < H; h++) {
                for (int m = 0; m < M; m++) {

                    String time = String.valueOf(h) + String.valueOf(m);

                    boolean valid = true;

                    for (int i = 1; i < time.length(); i++) {
                        if (time.charAt(i) != time.charAt(0)) {
                            valid = false;
                            break;
                        }
                    }

                    if (valid) {
                        count++;
                    }
                }
            }

            System.out.println(count);
        }

        sc.close();
    }
}