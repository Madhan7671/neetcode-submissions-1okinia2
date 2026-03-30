class Solution {
public:
vector<bool>visited;
void dfs(vector<vector<int>>& adj,int i)
{
    visited[i]=true;
    for(auto& j:adj[i])
    {
        if(!visited[j])
        {
            dfs(adj,j);
        }
    }
}
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for(auto& i:edges)
        {
            int u=i[0];
            int v=i[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        visited.resize(n,0);
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
                count++;
                dfs(adj,i);
            }
        }
        return count;
    }
};
