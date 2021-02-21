class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        result = {}
        for i,num in enumerate(nums):
            k = target - num
            if k in result:
                return [result[k],i]
            else:
                result[num] = i
