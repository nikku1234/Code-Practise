class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        
        length = len(s)
        #print(length)
        a=[]
        for i in range(len(s)):
            result = s.find(s[i],i+1,length-1)
            #print(i,result)
            result = result-i
            a.append(result)
            '''if s[i] in s[i+1:]:
                print(s[i+1].index(i))'''
        return max(a)
        """
        left, right = 0, 0
        res = 0
        chars = dict()
        for right in range(len(s)):
            if s[right] in chars:
                left = max(left, chars[s[right]] + 1)
            chars[s[right]] = right
            res = max(res, right - left + 1)
        return res

            