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
int MaxDepth=0;
public:
    void traverse(TreeNode* curr,int depth)
    {
        if(!curr)
        {
            return;
        }
        MaxDepth=std::max(MaxDepth,depth);
        traverse(curr->left,depth+1);
        traverse(curr->right,depth+1);


    }
    int maxDepth(TreeNode* root) {
        traverse(root,1);
        return MaxDepth;
        
    }
};