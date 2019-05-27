class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        """Naive Logic"""
    ''' for i in range(len(nums)):
            left = nums[i+1:]
            for j in range(len(left)):
                if (nums[i]+left[j]) ==target :
                    return i,j+i+1 
        '''
    '''Better Logic'''
    '''
        k=0
        for i in nums:
            k = k+1
            if target-i in nums[k:]:
                return(k - 1, nums[k:].index(target - i) + k)
        '''
    '''Going for a better logic HashTable''' 
        hash_table={}
        for i in range(len(nums)):   
            hash_table[nums[i]]=i
        for i in range(len(nums)):
            if target-nums[i] in hash_table:
                if hash_table[target-nums[i]] != i:
                    return [i, hash_table[target-nums[i]] ]
        return []