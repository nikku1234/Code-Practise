class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

//         if(find(nums.begin(),nums.end(),target)!=nums.end())
//             return true;
//         else
//             return false;
        int val=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target ||nums[i]>target )
            {
                val=i;
                break;
            }
        }
        if(val==-1)
            val = nums.size();
        return val;
    }

};
