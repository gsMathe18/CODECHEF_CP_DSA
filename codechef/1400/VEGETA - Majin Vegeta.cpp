import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        int n[] = new int[t];
        int m[] = new int[t];

        int maxM = 0;
        for (int i = 0; i < t; i++) {

            n[i] = sc.nextInt();
            m[i] = sc.nextInt();

            maxM = Math.max(maxM, m[i]);
        }
        int primeCount[] = new int[maxM + 1];

        for (int i = 2; i <= maxM; i++) {

            if (primeCount[i] == 0) {

                for (int j = i; j <= maxM; j += i) {

                    primeCount[j]++;
                }
            }
        }
        long prefix[] = new long[maxM + 1];

        for (int i = 1; i <= maxM; i++) {

            prefix[i] = prefix[i - 1] + primeCount[i];
        }
        for (int i = 0; i < t; i++) {

            long ans = prefix[m[i] - 1] - prefix[n[i] - 1];

            System.out.println(ans);
        }

        sc.close();

	}
}
