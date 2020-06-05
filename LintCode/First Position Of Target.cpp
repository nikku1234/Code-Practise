class Solution {
public:
    /**
     * @param nums: The integer array.
     * @param target: Target to find.
     * @return: The first position of target. Position starts from 0.
     */
    int binarySearch(vector<int> &nums, int target) {
        // write your code here
        if(nums.size()==0)
        {
            return -1;
        }

        int left=0;
        int right = nums.size()-1;
        int mid;
        int result = -1;
        while(left<=right){

            mid = (left + right)/2;

            if(nums[mid]==target){
                result = mid;
                right = mid-1;
            }

            else if(nums[mid]>target)
                right = mid-1;

            else
                left = mid+1;

        }
        return result;
    }
};
