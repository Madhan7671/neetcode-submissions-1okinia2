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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root || root==p || root==q)
        {
            return root;
        }
        TreeNode* le=lowestCommonAncestor(root->left,p,q);
        TreeNode* ri=lowestCommonAncestor(root->right,p,q);
        if(le && ri)
        {
            return root;
        }
        return(le?le:ri);
    }
};
