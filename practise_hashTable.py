nums[]=[1,2,3,4,5]
target = 8
hash_table={}
for i in range(len(nums)):   
    hash_table[nums[i]]=i
for i in range(len(nums)):
    if target-nums[i] in hash_table:
        if hash_table[target-nums[i]] != i:
                print (i, hash_table[target-nums[i]] )
print("nothing")