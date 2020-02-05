#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin>>a>>b;
    string c[] ={"one","two","three","four","five","six","seven","eight","nine"};
    for(int i=a;i<=b;i++)
    {
         cout<<((i<=9)?c[i-1]:((i%2==0)?"even":"odd"))<<endl;
    }
    return 0;
}


