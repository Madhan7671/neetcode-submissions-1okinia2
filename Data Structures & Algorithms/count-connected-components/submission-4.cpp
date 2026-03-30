class Solution {
public:
vector<bool>visited;
vector<vector<int>>adj;
void dfs(int i)
{
    visited[i]=true;
    for(int j:adj[i])
    {
        if(!visited[j])
        {
            dfs(j);
        }
    }
}
    int countComponents(int n, vector<vector<int>>& edges) {
        int ans=0;
        visited.resize(n,0);
        adj.resize(n);
        for(auto& i:edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
                dfs(i);
                ans++;
            }
        }
        return ans;
    }
};
