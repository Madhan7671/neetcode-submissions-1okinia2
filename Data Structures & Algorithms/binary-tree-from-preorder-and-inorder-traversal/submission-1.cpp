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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.empty() && inorder.empty())
        {
            return nullptr;
        }
        int rootval=preorder[0];
        TreeNode* root=new TreeNode(rootval);
        int i=0;
        while(rootval!=inorder[i])
        {
            i++;
        }
        vector<int>leftin(inorder.begin(),inorder.begin()+i);
        vector<int>rightin(inorder.begin()+i+1,inorder.end());
        vector<int>leftpre(preorder.begin()+1,preorder.begin()+1+leftin.size());
        vector<int>rightpre(preorder.begin()+leftin.size()+1,preorder.end());
        root->left=buildTree(leftpre,leftin);
        root->right=buildTree(rightpre,rightin);
        return root;
    }
};
