import java.util.Scanner;

public class Solution {

    public static String getSmallestAndLargest(String s, int k) {
   String smallest = "";
    String largest = "";
    if(s.length()>=k){
         smallest = s.substring(0,k);
         largest  = s.substring(0,k);

    String small,large;
    for(int i=0;i<s.length()-k+1;i++)
    {
         small = s.substring(i,i+k);
         large = s.substring(i,i+k);
        if(small.compareTo(smallest)<=0)
        {
            smallest = small;
        }
        if(large.compareTo(largest)>=0)
        {
            largest = large;
        }
    }
    }


    return smallest + "\n" + largest;
}

