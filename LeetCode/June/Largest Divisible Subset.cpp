class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
    if (nums.size() == 0) return {};

    std::sort(nums.begin(), nums.end());

    vector<int> count(nums.size(), 1);
    for (int i = 1; i < nums.size(); i++) {
        for (int j = i - 1; j >= 0; j--) {
            if (nums[i] % nums[j] == 0) {
                count[i] = std::max(count[i], count[j] + 1); // step 2 for each element in nums, find the
                                                             // length of largest subset it has.
            }
        }
    }

    // step 3 pick the index of the largest element in count.
    auto pos = std::max_element(count.begin(), count.end());
    int maxIndex = pos - count.begin();

    vector<int> result;
    int temp = nums[maxIndex];
    int currentCount = count[maxIndex];
    for (int i = maxIndex; i >= 0; i--) {
        if (temp % nums[i] == 0 && count[i] == currentCount) {
            result.push_back(nums[i]); // step 4 from nums[maxIndex] to 0, add every element belongs
                                       // to the largest subset.
            temp = nums[i];
            currentCount--;
        }
    }
    return result;
}
};
