#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    //Using maps
    map<string,int> map1;

    for(int i=0;i<n;i++){
        string temp;
        int temp1;
        cin>>temp>>temp1;
        map1.insert({temp,temp1});
    }

    string temp;
    // for(int i=0;i<n;i++){
    //     string temp;
    while(cin>>temp){
        // cout<<map1;
        auto temp_val = map1.find(temp);
        // cout<<temp_val;
        if(temp_val!= map1.end()){

            cout<<temp_val->first<<"="<<temp_val->second<<endl;
        }
        else
            cout<<"Not found"<<endl;
    }
    return 0;
}
