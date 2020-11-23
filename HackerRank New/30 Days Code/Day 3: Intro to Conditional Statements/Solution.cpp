#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int n = N;
    if (n%2!=0){
        cout<<"Weird";
    }
    else if (n>=2 and n<=5){
        cout<<"Not Weird";
    }

    else if(n>=6 and n<=20){
        cout<<"Weird";
    }
    else{
        cout<<"Not Weird";
    }

    return 0;
}
