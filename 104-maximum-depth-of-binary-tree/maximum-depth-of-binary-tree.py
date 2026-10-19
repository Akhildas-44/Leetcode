# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: TreeNode | None) -> int:
        MaxDepth=0
        def traverse(curr,depth):
            nonlocal MaxDepth
            if not curr:
                return
            MaxDepth=max(MaxDepth,depth)
            traverse(curr.left,depth+1)
            traverse(curr.right,depth+1)
        traverse(root,1)
        return MaxDepth
        