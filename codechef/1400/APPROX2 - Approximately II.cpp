import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
        if (!sc.hasNextInt()) return;
        
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            long k = sc.nextLong();
            long[] a = new long[n];
            
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextLong();
            }
            
            long minDiff = Long.MAX_VALUE;
            long count = 0;
            
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    long sum = a[i] + a[j];
                    long diff = Math.abs(sum - k);
                    
                    if (diff < minDiff) {
                        minDiff = diff;
                        count = 1; 
                    } else if (diff == minDiff) {
                        count++; 
                    }
                }
            }
            
            System.out.println(minDiff + " " + count);
        }
	}
}
