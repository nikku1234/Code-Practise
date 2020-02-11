import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {



    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        String n = scanner.nextLine();
        Boolean b1;
        BigInteger numBig = new BigInteger(n);
        b1 = numBig.isProbablePrime(1);
        if(b1)
            System.out.println("prime");
        else
            System.out.println("not prime");
        //System.out.println(b1);
        scanner.close();
    }
}
