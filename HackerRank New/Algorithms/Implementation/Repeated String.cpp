#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
// Not an optimised one, will change to an optimised one, with less space and time complexity
long repeatedString(string s, long n) {
    
    long count = 0;
    int s_length=s.size();
    for(int i=0;i<s_length;i++){
        if(s[i]=='a')
            count++;
    }
    cout<<count<<endl;
    long value =  n / s_length;
    count = count * value;
    cout<<count<<endl;
    if(n % s_length!=0){
        long temp = n%s_length;
        for(int i=0;i<temp;i++){
            if(s[i]=='a')
                count++;
        }

    }

    return count;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
