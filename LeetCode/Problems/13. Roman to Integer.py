class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        if len(s) == 0:
            return 0
        else:
            ref = {
                "I" : 1,
                "V" : 5,
                "X" : 10,
                "L" : 50,
                "C" : 100,
                "D" : 500,
                "M" : 1000
            }

            sum = ref[s[-1]]
            # print(sum)

            for i in range(len(s)-2,-1,-1):
                print(i,sum)


                if(ref[s[i]] < ref[s[i+1]]):
                    sum -= ref[s[i]]
                else:
                    sum += ref[s[i]]
            return sum

        
