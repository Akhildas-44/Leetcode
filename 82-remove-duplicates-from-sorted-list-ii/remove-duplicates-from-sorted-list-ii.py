# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: ListNode | None) -> ListNode | None:
        dummy=ListNode(0,head)
        prev=dummy
        curr=head
        while curr and curr.next:
            if(curr.val!=curr.next.val):
                curr=curr.next
                prev=prev.next
            else:
                while(curr and curr.next and curr.val==curr.next.val):
                    curr=curr.next
                curr=curr.next
                prev.next=curr
        return dummy.next
        