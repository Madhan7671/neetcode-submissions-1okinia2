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
        string s="";
        if(!root)
        {
            return s;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                if(temp)
                {
                    s+=to_string(temp->val)+',';
                    q.push(temp->left);
                    q.push(temp->right);
                }
                else{
                    s+="#,";
                }
            }
        }
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size()==0)
        {
            return nullptr;
        }
        queue<TreeNode*>q;
        stringstream ss(data);
        string temp;
        getline(ss,temp,',');
        TreeNode* root=new TreeNode(stoi(temp));
        q.push(root);
        while(!q.empty())
        {
            TreeNode* curr=q.front();
            q.pop();
            getline(ss,temp,',');
            if(temp=="#")
            {
                curr->left=nullptr;
            }
            else{
                curr->left=new TreeNode(stoi(temp));
                q.push(curr->left);
            }
            getline(ss,temp,',');
            if(temp=="#")
            {
                curr->right=nullptr;
            }
            else{
                curr->right=new TreeNode(stoi(temp));
                q.push(curr->right);
            }
        }
        return root;
    }
};
