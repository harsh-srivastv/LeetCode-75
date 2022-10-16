# https://leetcode.com/problems/linked-list-cycle-ii/

# Definition for singly-linked list.
from typing import Optional


class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        if head is None: return None
        if head.next is None: return None
        
        slow = head
        fast = head
        flag = False
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
            
            if slow ==  fast:
                flag = True
                break
        
        if flag == False: return None
        
        start = head
        while start != slow:
            start = start.next
            slow = slow.next
            
        return start