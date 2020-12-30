class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        nums.sort()
        res = []

        for i,a in enumerate(nums):

            # If same as the previous value just continue, already checked
            if i>0 and a == nums[i-1]:
                continue

            # Using left and right pointers
            l,r = i+1, len(nums)-1

            while l < r:
                threeSum = a + nums[l] + nums[r]
                if threeSum > 0:
                    r -= 1
                elif threeSum < 0:
                    l += 1
                else:
                    res.append([a,nums[l],nums[r]])
                    l += 1
                    # Making sure that left pointer is not same as its previous value
                    while nums[l] == nums[l-1] and l<r:
                        l += 1
        return res

        # Time Limit Exceed
#         res = []
#         if len(nums) < 3:
#             return res
#         nums.sort()
#         for i in range(0,len(nums)):
#             temp = 0
#             for j in range(i+1,len(nums)):
#                 temp = nums[i] + nums[j]
#                 temp = temp * -1
#                 if temp in nums[j+1:]:
#                     res1 = [nums[i],nums[j],temp]
#                     if res1 not in res:
#                         res.append(res1)
#         return res
