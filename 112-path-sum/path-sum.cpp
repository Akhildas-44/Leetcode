/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
bool ans=false;
public:
    void traversal(TreeNode* curr,int curr_sum,int targetSum)
    {
        if(!curr)
        {
            return;
        }
        int new_sum = curr_sum + curr->val;
       if (!curr->left && !curr->right)
       {
          if(new_sum==targetSum)
          {
            ans= ans || true;
          }
       }
       traversal(curr->left,new_sum,targetSum);
       traversal(curr->right,new_sum,targetSum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root){
            return false;
        }
        traversal(root,0,targetSum);
        return ans;

        
    }
};