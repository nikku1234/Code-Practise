#https://www.youtube.com/watch?v=-fFDzIWebA4
class Solution(object):
    def convert(self, s, numRows):

        """
        :type s: str
        :type numRows: int
        :rtype: str
        """

        '''
        # Approach 1
        0 [PL] -> [P,A]
        1 [APL]
        2 [Y]

        Space - O(n)
        Time - O(n + k) -> [ (n+k) < (n+n) = (2n) -> (n) ] = O(n)
        n - no of characters
        k - no of rows

        '''
#         if numRows == 1 or numRows >= len(s):
#             return s

#         delta = -1
#         row = 0
#         res = [[] for i in xrange(numRows)]

#         #iterating the string
#         for charc in s:
#             res[row].append(charc)
#             if row == 0 or row == numRows-1:
#                 delta *= -1
#             row += delta

#         for i in xrange(len(res)):
#             res[i] = ''.join(res[i])

#         return ''.join(res)

    '''
        Approach 2

        PAYPALISHIRING  numRows = 4
        row 0.  0 6 12 or    0 +6 +6
        row 1.  1 5 7 11 13  1 +4 +2 +4 +2
        row 2.  2 4 8 10.    2 +2+ 4 +2 +4
        row 3.  3 9          3 +6 +6

        cycle = 2 * numRows - 2
        
        Time O(n)
        Space O(1) or O(n)


    '''

        if numRows==1:
            return s
        cycle = 2 * numRows - 2
        res = []
        for i in xrange(numRows):
            for j in xrange(i,len(s),cycle):
                res.append(s[j])
                k = j + cycle - 2 * i
                if i != 0 and i != numRows - 1 and k < len(s):
                    res.append(s[k])
        return ''.join(res)
