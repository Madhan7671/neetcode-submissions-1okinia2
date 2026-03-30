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
vector<int>mad;
void fn(TreeNode* root)
{
    if(!root)
    {
        return;
    }
    fn(root->left);
    mad.push_back(root->val);
    fn(root->right);
}
    int kthSmallest(TreeNode* root, int k) {
        fn(root);
        return(mad[k-1]);
    }
};
