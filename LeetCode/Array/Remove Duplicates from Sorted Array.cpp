class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       // int val = nums[0];
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return 1;

        int pos =0;
        //int count = 0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
            {
                //cout<<"test";
                pos+=1;
                nums[pos]=nums[i];
              //  val = nums[i];

            }
        }
        return pos+1;

    }
};
