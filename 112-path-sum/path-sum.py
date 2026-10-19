# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def hasPathSum(self, root: TreeNode | None, targetSum: int) -> bool:
        ans=False
        if not root:
            return False
        def traverse(curr,curr_sum):
            nonlocal ans
            if not curr:
                return
            Newsum=curr_sum+curr.val
            if not curr.left and not curr.right:
                if(Newsum==targetSum):
                    ans=ans or True
            traverse(curr.left,Newsum)
            traverse(curr.right,Newsum)
        traverse(root,0)
        return ans
        