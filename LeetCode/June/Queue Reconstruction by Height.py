class Solution(object):
    def reconstructQueue(self, people):
        """
        :type people: List[List[int]]
        :rtype: List[List[int]]
        """
        # print(people[0])
        people = sorted(people, key = lambda x: (-x[0], x[1]))
        print(people)
        res = []
        for p in people:
            print(p[1])
            res.insert(p[1], p)
        return res
        
