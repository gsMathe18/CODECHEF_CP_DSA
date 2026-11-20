import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner scanner = new Scanner(System.in);
        if (!scanner.hasNextInt()) return;
        int t = scanner.nextInt();
        
        StringBuilder out = new StringBuilder();
        while (t-- > 0) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            int c = scanner.nextInt();
            
            int x = 0;
            // Iterate from the 29th bit down to 0
            for (int bit = 29; bit >= 0; bit--) {
                int abit = (a >> bit) & 1;
                int bbit = (b >> bit) & 1;
                int cbit = (c >> bit) & 1;
                
                int flip = 0;
                if (a > b && abit > bbit) flip = 1;
                if (b > c && bbit > cbit) flip = 1;
                if (a > c && abit > cbit) flip = 1;
                
                if (flip == 1) {
                    a ^= (1 << bit);
                    b ^= (1 << bit);
                    c ^= (1 << bit);
                    x ^= (1 << bit);
                }
            }
            
            if (a < b && b < c) {
                out.append(x).append("\n");
            } else {
                out.append(-1).append("\n");
            }
        }
        System.out.print(out);

	}
}
