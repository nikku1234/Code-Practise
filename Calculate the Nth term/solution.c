#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  if(n==a)
  {
      return a;
  }
  else if(n==b)
  {
      return b;
  }
  else if(n==c)
  {
      return c;
  }
   else if(n == 4) 
   { 
       return a+b+c; 
    }
    else
    {
        return find_nth_term(n-1,b,c,a+b+c);
    }
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}

