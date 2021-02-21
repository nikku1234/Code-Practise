# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:

        return_pointer = head
        size = head
        counter = 0

        while(size):
            counter += 1
            size = size.next
        print(counter)

        if counter == n:
            head = head.next
            return head

        counter = counter - n -1

        if counter < 0:
            return None


        while(counter):
            head = head.next
            counter = counter - 1

        head.next = head.next.next
        return return_pointer

        
