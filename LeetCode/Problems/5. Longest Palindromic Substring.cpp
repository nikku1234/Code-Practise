
class Solution {
public:
    string longestPalindrome(string s) {
        int best_length =0;
        string best_s = "";
        int n = s.length();

        // for example 'racecar'
        for(int mid = 0; mid < n; mid++){
            for(int x = 0; mid - x >= 0 && mid + x <n; x++){
                if(s[mid-x] != s[mid+x])
                    break;

                int len = 2 * x + 1;

                if(len > best_length){
                    best_length = len;
                    best_s = s.substr(mid-x,len);
                }
            }
        }
        //for abba
        for(int mid = 0; mid < n - 1; mid++){
            for(int x = 1; mid - x + 1>=0 && mid+x<n;x++){
                if( s[mid-x+1] != s[mid+x])
                    break;
                int len = 2 * x;
                if(len>best_length){
                    best_length = len;
                    best_s = s.substr(mid-x+1,len);
                }

            }
        }


    return best_s;
    }
};
// Time Complexity Exceeded ( Brute Force Method) 
// bool is_palindrome(string s){
//     string rev = s;
//     reverse(rev.begin(),rev.end());
//     return s==rev;
// }
//
// class Solution {
// public:
//     string longestPalindrome(string s) {
//         int best_length =0;
//         string best_s = "";
//         int n = s.length();
//         for(int left = 0;left < n; left++){
//             for(int right = left;right < n; right++){
//                 int len = right-left+1;
//                 string subs = s.substr(left,len);
//                 if(is_palindrome(subs) && len>best_length){
//                     best_length = len;
//                     best_s = subs;
//                 }
//             }
//         }
//     return best_s;
//     }
// };
