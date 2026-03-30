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
int res=INT_MIN;
int fn(TreeNode* root)
{
    if(!root)
    {
        return 0;
    }
    int le=fn(root->left);
    int ri=fn(root->right);
    res=max(res,le+ri);
    return(1+max(le,ri));
}
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)
        {
            return 0;
        }
        fn(root);
        return res;
    }
};
