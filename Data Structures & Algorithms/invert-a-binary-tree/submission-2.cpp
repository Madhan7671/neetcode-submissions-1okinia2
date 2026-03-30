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
    TreeNode* invertTree(TreeNode* root) {
        queue<TreeNode*>q;
        if(!root)
        {
            return nullptr;
        }
        q.push(root);
        while(!q.empty())
        {
            TreeNode* dummy=q.front();
            q.pop();
            swap(dummy->left,dummy->right);
            if(dummy->left)
            {
                q.push(dummy->left);
            }
            if(dummy->right)
            {
                q.push(dummy->right);
            }
        }
        return root;
    }
};
