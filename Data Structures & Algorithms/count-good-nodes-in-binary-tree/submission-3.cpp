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
    int goodNodes(TreeNode* root) {
        queue<pair<TreeNode*,int>>q;
        int count=0;
        if(!root)
        {
            return count;
        }
        q.push({root,root->val});
        while(!q.empty())
        {
            auto&[temp,x]=q.front();
            q.pop();
            int maxval=max(temp->val,x);
            if(maxval<=temp->val)
            {
                count++;
            }
            if(temp->left)
            {
                q.push({temp->left,maxval});
            }
            if(temp->right)
            {
                q.push({temp->right,maxval});
            }
        }
        return count;
    }
};
