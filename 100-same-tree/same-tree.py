# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSameTree(self, p: TreeNode | None, q: TreeNode | None) -> bool:
        def Same(curr1,curr2):
            if not curr1 and not curr2:
                return True
            if not curr1 or not curr2:
                return False
            return (curr1.val==curr2.val) and \
                Same(curr1.left,curr2.left) and \
                Same(curr1.right,curr2.right)
        return Same(p,q)
            
        
