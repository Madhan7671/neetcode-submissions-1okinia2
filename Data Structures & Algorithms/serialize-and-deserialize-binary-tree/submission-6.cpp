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
        if(!root)
        {
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* temp=q.front();
            q.pop();
            if(temp)
            {
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
        if(data.size()==0)
        {
            return nullptr;
        }
        stringstream ss(data);
        string a;
        getline(ss,a,',');
        TreeNode* root=new TreeNode(stoi(a));
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* temp=q.front();
            q.pop();
            getline(ss,a,',');
            if(a=="#")
            {
                temp->left=nullptr;
            }
            else{
                TreeNode* y=new TreeNode(stoi(a));
                temp->left=y;
                q.push(y);
            }
            getline(ss,a,',');
            if(a=="#")
            {
                temp->right=nullptr;
            }
            else{
                TreeNode* m=new TreeNode(stoi(a));
                temp->right=m;
                q.push(m);
            }
        }
        return root;
    }
};
