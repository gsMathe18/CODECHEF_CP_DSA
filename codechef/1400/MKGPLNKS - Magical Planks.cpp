import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        
        int t = Integer.parseInt(br.readLine().trim());
        StringBuilder out = new StringBuilder();
        
        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine().trim());
            String s = br.readLine().trim();
            
            int grps_b = 0;
            int grps_w = 0;
            
            int i = 0;
            while (i < n) {
                char currentChar = s.charAt(i);
                if (currentChar == 'B') {
                    grps_b++;
                } else {
                    grps_w++;
                }
                
                // Skip all consecutive characters of the same type
                int j = i + 1;
                while (j < n && s.charAt(j) == currentChar) {
                    j++;
                }
                i = j;
            }
            
            // The answer is the minimum number of groups between 'B' and 'W'
            out.append(Math.min(grps_b, grps_w)).append("\n");
        }
        
        System.out.print(out);
	}
}
