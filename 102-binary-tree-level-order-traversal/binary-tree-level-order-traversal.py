# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: TreeNode | None) -> list[list[int]]:
     ans=[]
     def traversal(curr,level):
        if not curr:
            return
        if (len(ans)==level):
            ans.append([])
        ans[level].append(curr.val)
        traversal(curr.left,level+1)
        traversal(curr.right,level+1)
     traversal(root,0)
     return ans   