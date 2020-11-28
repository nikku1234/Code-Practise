#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    list<int> value;
    int q=0,w=0;

    while(n){
        list<int>::iterator it = value.begin();
        int remainder = n%2;
        n = n/2;
        if(remainder==1){

            q++;

            if(q>w){
                w=q;
            }
        }
        else{
            q=0;
        }
        value.insert(it,remainder);
    }
    cout<<w;


    return 0;
}
