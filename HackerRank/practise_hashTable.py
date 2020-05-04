nums=[11,2,13,4,6]
target = 8
hash_table={}
for i in range(len(nums)):   
    hash_table[nums[i]]=i
print(hash_table)
for i in range(len(nums)):
    if target-nums[i] in hash_table:
        print(hash_table[target-nums[i]])
        if hash_table[target-nums[i]] != i:
                print (i, hash_table[target-nums[i]])
print("nothing")