class Solution {
public:
    void reverseString(vector<char>& s) {
        char v;
        int size = s.size()-1;
        cout<<size;
        for(int i=0;i<s.size()/2;i++)
        {
         v = s[i];
         s[i] = s[size];
        s[size] = v;
        size--;
        }

    }
};

//Another Solution
class Solution {
public:
    string reverseString(string s) {
        int i = 0, j = s.size() - 1;
        while(i < j){
            swap(s[i++], s[j--]);
        }

        return s;
    }
};

//Using the default function
class Solution {
public:
    string reverseString(string s) {
        return { s.rbegin(), s.rend() };
    }
};
