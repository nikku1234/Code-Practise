class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        #center and expand to left and right

        #return length, left_index,right_index
        def longestIndex(s,l,r):
            while l >= 0 and r < len(s) and s[l] == s[r]:
                l -= 1
                r += 1
            l += 1
            r -= 1
            return( r - l + 1, l, r)

        longest = 0
        left = 0
        right = -1

        for i in xrange(len(s)):
            #odd case
            length,l,r = longestIndex(s,i,i)
            if length >longest:
                longest = length
                left = l
                right = r
            #even case
            length,l,r = longestIndex(s,i,i+1)
            if length >longest:
                longest = length
                left = l
                right = r

        return s[left:right+1]
