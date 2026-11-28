import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		 Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();

            for (int i = 1; i <= n; i++) {

                if (i % 2 == 1) {
                    System.out.print(i + " ");
                } else {
                    System.out.print((2 * (i - 1)) + " ");
                }
            }

            System.out.println();
        }

        sc.close();

	}
}
