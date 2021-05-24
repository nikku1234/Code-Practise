1512. Number of Good Pairs

class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:   
        # count = 0
        # for i in range(0,len(nums)):
        #     for j in range(i+1,len(nums)):
        #         if nums[i] == nums[j]:
        #             count += 1
        # return count
        
#         repeating_values = {}
#         count = 0
#         for i in nums:
#             if i in repeating_values:
#                 if repeating_values[i] == 1:
#                     count +=1 
#                 else:
#                     count += repeating_values[i]
#                 repeating_values[i] += 1
            
#             else:
#                 repeating_values[i] = 1
#         return count
        
        repeating_values = {}
        total = 0
        for i in nums:
            if i not in repeating_values.keys():
                repeating_values[i] = 0
            repeating_values[i] += 1
    
        for s in repeating_values.values():
            total += (s*(s-1))//2
        return total
    
