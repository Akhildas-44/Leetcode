# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        slow=head
        fast=head
        while(fast!=None and fast.next!=None):
            slow=slow.next
            fast=fast.next.next
        prev=None
        curr=slow
        while(curr!=None):
            temp=curr.next
            curr.next=prev
            prev=curr
            curr=temp
        firstlist=head
        secondlist=prev
        while(secondlist!=None):
            if(firstlist.val!=secondlist.val):
                return False
            firstlist=firstlist.next
            secondlist=secondlist.next
        return True


        