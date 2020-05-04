class Solution {
public:
    void moveZeroes(vector<int>& nums) {


        int temp =0;

        for(int i=0; i<nums.size();i++){
            if(nums[i]==0)
            {
                for(int j=i+1;j<nums.size();j++)
                {
                    if(nums[j]!=0)
                    {
                        temp = nums[j];
                        nums[j]=nums[i];
                        nums[i]=temp;
                        break;
                    }
                }
            }
        }

    }
};


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int j = 0, i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[j++], nums[i]);
            }
        }
    }
};

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNZpos = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0)
                nums[lastNZpos++] = nums[i];
        }

        for (int i = lastNZpos; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};
