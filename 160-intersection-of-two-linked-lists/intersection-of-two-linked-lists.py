# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        visited_nodes=set()
        curr=headB
        while(curr!=None):
            visited_nodes.add(curr)
            curr=curr.next
        curr=headA
        while(curr!=None):
            if curr in visited_nodes:
                return curr
            curr=curr.next
        return None

