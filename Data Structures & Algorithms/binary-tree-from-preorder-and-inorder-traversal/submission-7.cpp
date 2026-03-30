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
        if(preorder.empty() || inorder.empty())
        {
            return nullptr;
        }
        int rootval=preorder[0];
        TreeNode* root=new TreeNode(rootval);
        int i=0;
        while(inorder[i]!=rootval)
        {
            i++;
        }
        vector<int>lein(inorder.begin(),inorder.begin()+i);
        vector<int>rin(inorder.begin()+i+1,inorder.end());
        vector<int>lepre(preorder.begin()+1,preorder.begin()+lein.size()+1);
        vector<int>ripre(preorder.begin()+lein.size()+1,preorder.end());
        root->left=buildTree(lepre,lein);
        root->right=buildTree(ripre,rin);
        return root;
    }
};
