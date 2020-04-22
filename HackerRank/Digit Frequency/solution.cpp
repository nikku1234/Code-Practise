#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a[10] ={0};
    int temp =0;
    int b[10] ={0,1,2,3,4,5,6,7,8,9};
    char *s;
    s = malloc(1024*sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    for(int i=0;i<strlen(s);i++)
    {
        temp = s[i]-48;
        for(int j=0;j<10;j++)
        {
            if(temp==b[j])
            {
                a[j]+=1;
                break;
            }
        }
    }
    for(int j=0;j<10;j++)
        {
           printf("%d",a[j]);
           printf(" "); 
        }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

