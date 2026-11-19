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
    
            double s = sc.nextDouble();
            double v = sc.nextDouble();
    
            double ans = (2.0 * s) / (3.0 * v);
    
            System.out.printf("%.10f%n", ans);
        }
	}
}
