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
    TreeNode* prev = nullptr;

    bool isValidBST(TreeNode* root) {
        if (!root) return true;

        // Left subtree
        if (!isValidBST(root->left)) return false;

        // Current node check
        if (prev && root->val <= prev->val) return false;
        prev = root;  // update previous

        // Right subtree
        return isValidBST(root->right);
    }
};

