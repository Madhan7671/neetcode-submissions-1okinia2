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
            return 0;
        }
        q.push({root,root->val});
        while(!q.empty())
        {
            auto[temp,max_val]=q.front();
            q.pop();
            int mini=max(temp->val,max_val);
            if(mini<=temp->val)
            {
                count++;
            }
            if(temp->left)
            {
                q.push({temp->left,mini});
            }
            if(temp->right)
            {
                q.push({temp->right,mini});
            }
        }
        return count;
    }
};
