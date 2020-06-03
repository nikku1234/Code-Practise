class Solution:
    def twoCitySchedCost(self, costs: List[List[int]]) -> int:
        money_to_getback = []
        print(len(costs))
        N = len(costs)//2
        print(N)
        minmumCost = 0

        for i,j in costs:
            money_to_getback.append(j-i)
            minmumCost+=i

        money_to_getback.sort()

        for i in range(N):
            minmumCost += money_to_getback[i]

        return minmumCost



        
