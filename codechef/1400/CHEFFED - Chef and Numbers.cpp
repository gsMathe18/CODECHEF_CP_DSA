import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    private static int sumOfDigits(long num) {
        int sum = 0;
        while (num > 0) {
            sum += (int)(num % 10);
            num /= 10;
        }
        return sum;
    }
    
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner scanner = new Scanner(System.in);
        if (!scanner.hasNextLong()) {
            return;
        }
        long n = scanner.nextLong();
        
        int count = 0;
        // We only need to check numbers from N - 97 up to N
        long start = Math.max(1L, n - 97);
        
        for (long x = start; x <= n; x++) {
            int sx = sumOfDigits(x);
            int ssx = sumOfDigits(sx);
            
            if (x + sx + ssx == n) {
                count++;
            }
        }
        
        System.out.println(count);
        scanner.close();

	}
}
