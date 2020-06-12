class Solution:
    """
    @param nums: A set of numbers
    @return: A list of lists
    """
    def subsets(self, nums):
        # write your code here
        nums.sort()
        ret = [[]]
        for n in nums:
            print(ret)
            ret += [r + [n] for r in ret]
        return ret
