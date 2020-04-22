import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
import java.util.ArrayList;
import java.util.ArrayList;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int a,b,c,d;

        ArrayList[] set = new ArrayList[n];

        for(int i=0;i<n;i++)
        {
            a = scan.nextInt();
            set[i] = new ArrayList();
            for(int j=0;j<a;j++)
            {
            set[i].add(scan.nextInt());
            }
        }
        b = scan.nextInt();
        for(int i=0;i<b;i++)
        {
            c = scan.nextInt();
            d = scan.nextInt();
            try{
                System.out.println(set[c-1].get(d-1));
            }
            catch(Exception e)
            {
                System.out.println("ERROR!");
            }
        }



    }
}


