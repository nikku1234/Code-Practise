#Find Numbers with Even Number of Digits

class Solution {
    
    int count(int n)
    {
        int length =0;
        while(n)
        {
            n = n/10;
            length++;
        }
        return length;   
    }
public:
    int findNumbers(vector<int>& nums) {
        int result = 0;
        for(int i = 0;i<nums.size();i++)
        {
          if(count(nums[i])%2==0)
              result++;
              
        }
        return result;
        
    }
};

#Alternative Solution
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n,count=0;
        for(int i=0;i<nums.size();i++)
        {
            n=nums[i];
            if(( 10<=n && n<=99) || (1000<=n && n<=9999 ) || ( n==100000 ))
            {
               count++;
            }
        }
        return count;
    }
};