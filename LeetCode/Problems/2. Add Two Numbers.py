# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        return_head = current = ListNode(0)
        carry_value = 0

        while l1 or l2 or carry_value:

            if l1:
                carry_value = carry_value + l1.val
                l1 = l1.next
            if l2:
                carry_value = carry_value + l2.val
                l2 = l2.next
            current.next = ListNode(carry_value%10)
            carry_value = carry_value/10
            current = current.next

        return return_head.next
