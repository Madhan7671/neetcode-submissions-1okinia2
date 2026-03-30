class Solution {
public:
int m;
int ans(vector<vector<int>>& adj,vector<bool>& visited,int parent,int node)
{
    visited[node]=true;
    for(int i:adj[node])
    {
        if(!visited[i])
        {
            if(ans(adj,visited,node,i))
            {
                return true;
            }
        }
        else
        {
            if(i!=parent)
            {
                return true;
            }
        }
    }
    return false;
}
    bool validTree(int n, vector<vector<int>>& edges) {
        m=n;
        if(edges.size()!=n-1)
        {
            return false;
        }
        vector<vector<int>>adj(n);
        for(auto& e:edges)
        {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        vector<bool>visited(n,0);
        if(ans(adj,visited,-1,0)) return false;
        for(bool i:visited)
        {
            if(!i)
            {
                return false;
            }
        }
        return true;
    }
};
