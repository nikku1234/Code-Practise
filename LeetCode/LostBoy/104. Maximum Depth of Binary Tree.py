# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: TreeNode) -> int:
        if root == None:
            return 0
        else:
            lroot = self.maxDepth(root.left)
            rroot = self.maxDepth(root.right)
            if lroot > rroot:
                return lroot+1
            else:
                return rroot+1
