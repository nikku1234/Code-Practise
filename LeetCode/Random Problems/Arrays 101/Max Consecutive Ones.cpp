class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_val = 0;
        int current = 0;
        
        for(int i=0; i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                current++;
            }
            else
            {
                if(max_val<current)
                    max_val=current;
                if(max_val>=nums.size()/2)
                    return max_val;
                
                current =0;
                    
            }            
        }
    return max(max_val,current);
    }
   
};