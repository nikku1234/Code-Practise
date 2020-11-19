import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        int i = 4;
        double d = 4.0;
        String s = "HackerRank ";

        Scanner scan = new Scanner(System.in);

        /* Declare second integer, double, and String variables. */
        int temp1;
        double temp2;
        String temp3;
        /* Read and save an integer, double, and String to your variables.*/
        // Note: If you have trouble reading the entire String, please go back and review the Tutorial closely.
        temp1 = scan.nextInt();
        temp2 = scan.nextDouble();
        scan.nextLine();
        temp3 = scan.nextLine();
        /* Print the sum of both integer variables on a new line. */
        System.out.println(i+temp1);
        /* Print the sum of the double variables on a new line. */
		    System.out.println(d+temp2);
        /* Concatenate and print the String variables on a new line;
        	the 's' variable above should be printed first. */
        System.out.println(s+temp3);
        scan.close();
    }
}
