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
