# https://leetcode.com/problems/merge-two-sorted-lists/

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def mergeTwoLists(self, head1: ListNode, head2: ListNode) -> ListNode:
        if head1 is None:
            return head2
        if head2 is None:
            return head1
        
        if(head1.val > head2.val): 
            head1, head2 = head2, head1
        res = head1
        
        while(head1 is not None and head2 is not None):
            prev = None
            while(head1 is not None and head1.val <= head2.val):
                prev = head1
                head1 = head1.next
            prev.next = head2
            head1, head2 = head2, head1
        
        return res
            
        