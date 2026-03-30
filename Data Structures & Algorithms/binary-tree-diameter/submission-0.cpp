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
int res;
    int diameterOfBinaryTree(TreeNode* root) {
        res=0;
        dfs(root);
        return res;
    }
    int dfs(TreeNode* root)
    {
        if(!root)
        {
            return 0;
        }
        int lef=dfs(root->left);
        int rig=dfs(root->right);
        res=max(res,lef+rig);
        return(1+max(lef,rig));
    }
};
