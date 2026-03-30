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

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string ans;
        if(!root)
        {
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop();
            if(node)
            {
                ans+=to_string(node->val)+',';
                q.push(node->left);
                q.push(node->right);
            }
            else{
                ans+="#,";
            }
        }
        return ans;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        stringstream ss(data);
        string temp;
        getline(ss,temp,',');
        if(data.size()==0)
        {
            return nullptr;
        }
        queue<TreeNode*>q;
        TreeNode* root=new TreeNode(stoi(temp));
        q.push(root);
        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop();
            getline(ss,temp,',');
            if(temp=="#")
            {
                node->left=nullptr;
            }
            else{
                node->left=new TreeNode(stoi(temp));
                q.push(node->left);
            }
            getline(ss,temp,',');
            if(temp=="#")
            {
                node->right=nullptr;
            }
            else{
                node->right=new TreeNode(stoi(temp));
                q.push(node->right);
            }
        }
        return root;
    }
};
