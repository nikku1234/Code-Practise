#771. Jewels and Stones

class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        # count = 0
        # jewl = {}
        # for i in jewels:
        #     if i not in jewl:
        #         jewl[i] = 0
        # for j in stones:
        #     if j in jewl:
        #         count += 1
        # return count
        
        # return sum(s in jewels for s in stones)
        
        count = 0
        jewl = set(jewels)
        for s in stones:
            if s in jewl:
                count += 1
        return count