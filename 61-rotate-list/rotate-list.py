# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if not head or not head.next or k==0:
            return head
        length=0
        curr=head
        while(curr!=None):
            curr=curr.next
            length+=1
        k=k%length
        if(k==0):
            return head
        s=head
        f=head
        for i in range(k):
            f=f.next
        while(f.next!=None):
            s=s.next
            f=f.next
        newhead=s.next
        s.next=None
        f.next=head
        return newhead

        