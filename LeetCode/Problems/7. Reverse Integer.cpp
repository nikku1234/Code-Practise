class Solution {
public:
    int reverse(int x) {

        long long int result = 0;

        while(x){

            result = result * 10 + x %10;
            x = x / 10;
        }
        return (result<INT_MIN || result>INT_MAX) ? 0 : result;


    }
};
