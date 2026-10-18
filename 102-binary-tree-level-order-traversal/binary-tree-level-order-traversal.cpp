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
public:
    void traverse(TreeNode* curr,int level,vector<vector<int>>&ans)
    {
        if (!curr){
            return;
        }
        if(ans.size()==level){
            ans.push_back(vector<int>{});
        }
        ans[level].push_back(curr->val);
        traverse(curr->left,level+1,ans);
        traverse(curr->right,level+1,ans);
        
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        traverse(root,0,ans);
        return ans;
        
    }
};