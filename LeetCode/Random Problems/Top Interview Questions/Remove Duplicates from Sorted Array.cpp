class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int count=0;
        for(int i=0;i<nums.size();++i){
            if(i==0||nums[i]!=nums[count-1]){
                nums[count++] = nums[i];
            }
        }
        return count;
    }
};
