class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """

        longCommonPrefix = ""

        # Empty String
        if len(strs) == 0 or strs == "null":
            return longCommonPrefix

        index = 0

        # Go through all the strings, till it breaks

        for c in strs[0]:
            for i in range(0,len(strs)):
                if index >= len(strs[i]) or c != strs[i][index]:
                    return longCommonPrefix

            longCommonPrefix += c
            index += 1

        return longCommonPrefix

        
