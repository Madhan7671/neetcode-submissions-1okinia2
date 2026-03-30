class Solution {
public:
bool ans(vector<vector<int>>& adj,int parent,int i,vector<bool>& visited)
{
    visited[i]=true;
    for(int j:adj[i])
    {
        if(!visited[j])
        {
            ans(adj,i,j,visited);
        }
        else{
            if(j!=parent)
            {
                return true;
            }
        }
    }
    return false;
}
    bool validTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for(auto& i:edges)
        {
            int u=i[0];
            int v=i[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool>visited(n,0);
        if(ans(adj,-1,0,visited))
        {
            return false;
        }
        for(int i:visited)
        {
            if(!i)
            {
                return false;
            }
        }
        return true;
    }
};
