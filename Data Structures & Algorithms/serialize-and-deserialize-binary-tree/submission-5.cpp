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
        string ans="";
        queue<TreeNode*>q;
        q.push(root);
        if(!root)
        {
            return "";
        }
        while(!q.empty())
        {
            TreeNode* temp=q.front();
            q.pop();
            if(temp){
            ans+=to_string(temp->val)+",";
            q.push(temp->left);
            q.push(temp->right);
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
        TreeNode* root=new TreeNode(stoi(temp));
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            getline(ss,temp,',');
            TreeNode* node=q.front();
            q.pop();
            if(temp=="#")
            {
                node->left=nullptr;
            }
            else{
                TreeNode* node2=new TreeNode(stoi(temp));
                node->left=node2;
                q.push(node2);
            }
            getline(ss,temp,',');
            if(temp=="#")
            {
                node->right=nullptr;
            }
            else{
                TreeNode* node3=new TreeNode(stoi(temp));
                node->right=node3;
                q.push(node3);
            }
        }
        return root;
    }
};
