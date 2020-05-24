class Solution {
public:
    /**
     * @param k: An integer
     * @param n: An integer
     * @return: An integer denote the count of digit k in 1..n
     */
    int digitCounts(int k, int n) {
        // write your code here
        int result = 0;

        if(k==0 && n==0){
            return 1;
        }

        if(n>9){
            result++;
        }
        else{
            result = 1;
            return result;
        }

        for(int i=10; i<=n;i++){
        int temp =i;
        while(temp!=0){
            if(temp%10 == k){
                result++;
            }
            temp = temp/10;
        }

        }

        return result;
    }
};
