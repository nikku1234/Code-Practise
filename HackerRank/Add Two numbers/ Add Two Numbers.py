# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        result = ListNode(0)
        node = result
        temp =0
        
        while l1 is not None or l2 is not None or temp > 0:
            
            if l1 is not None:
                temp = temp + l1.val
                l1 = l1.next
                
            if l2 is not None:
                temp = temp + l2.val 
                l2 = l2.next
            
            node.next = ListNode(temp%10)
            node = node.next
            
            temp = temp // 10 
            
        return result.next
                
        