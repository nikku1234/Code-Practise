class Solution {
public:
    /**
     * @param n: An integer
     * @param nums: An array
     * @return: the Kth largest element
     */
    int kthLargestElement(int n, vector<int> &nums) {
        // write your code here
        sort(nums.begin(),nums.end(),greater<int>());
        int result = nums[n-1];
        return result;
    }
};
