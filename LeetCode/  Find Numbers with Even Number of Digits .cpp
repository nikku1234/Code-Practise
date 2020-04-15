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