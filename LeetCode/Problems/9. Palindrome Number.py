class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        MIN_INT = -2 ** 31
        MAX_INT = 2 ** 31 - 1

        y = 0
        real_val = x

        if x<0:
            return False

        while x>0:
            y = y*10 + x % 10
            x = x / 10

        if y == real_val:
            return True
        else:
            return False


        
