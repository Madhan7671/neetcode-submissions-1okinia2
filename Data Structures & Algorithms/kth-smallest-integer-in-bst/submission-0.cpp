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
void dfs(TreeNode* root)
{
    if(!root)
    {
        return;
    }
    dfs(root->left);
    mad.push_back(root->val);
    dfs(root->right);
}
    int kthSmallest(TreeNode* root, int k) {
        mad.clear();
        dfs(root);
        return(mad[k-1]);
    }
};
