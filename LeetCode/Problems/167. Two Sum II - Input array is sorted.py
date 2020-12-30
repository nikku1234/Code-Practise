# 167. Two Sum II - Input array is sorted
class Solution(object):
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        result = {}
        for i,n in enumerate(numbers):
            temp = target - n
            if temp in result:
                return [result[temp]+1,i+1]
            else:
                result[n] = i

        
