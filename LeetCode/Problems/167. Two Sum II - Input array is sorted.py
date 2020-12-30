# 167. Two Sum II - Input array is sorted
class Solution(object):
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """

        result = {}
        l,r = 0, len(numbers)-1
        while l<r:
            twoSum = numbers[l] + numbers[r]
            if twoSum > target:
                r -= 1
            elif twoSum < target:
                l += 1
            else:
                return [l+1,r+1]


# Brute Force
#         result = {}
#         for i,n in enumerate(numbers):
#             temp = target - n
#             if temp in result:
#                 return [result[temp]+1,i+1]
#             else:
#                 result[n] = i

        
