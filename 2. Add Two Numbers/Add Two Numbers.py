# Definition for singly-linked list.
from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        l1_ = l1
        l2_ = l2
        l3 = ListNode()
        l3_ = l3
        reminder = 0
        while True:
            if l1_ is None:
                l1_val = 0
            else: l1_val = l1_.val

            if l2_ is None:
                l2_val = 0
            else: l2_val = l2_.val

            l3_.val = int(l1_val + l2_val + reminder)%10
            reminder = int(int(l1_val + l2_val + reminder)/10)
            
            if l1_ is not None:
                l1_ = l1_.next
            if l2_ is not None:
                l2_ = l2_.next
            
            if l1_ is None and l2_ is None and reminder == 0:
                break

            l3_.next = ListNode()
            l3_ = l3_.next
        return l3