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
int ans=INT_MIN;
int fn(TreeNode* root)
{
    if(!root)
    {
        return 0;
    }
    int le=max(0,fn(root->left));
    int re=max(0,fn(root->right));
    ans=max(ans,root->val+le+re);
    return(root->val+max(le,re));
}
    int maxPathSum(TreeNode* root) {
        fn(root);
        return(ans);
    }
};
