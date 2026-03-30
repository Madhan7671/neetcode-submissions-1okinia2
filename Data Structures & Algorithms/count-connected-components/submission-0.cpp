class Solution {
public:
void ans(vector<bool>& visited,vector<vector<int>>& adj,int node)
{
    visited[node]=true;
    for(int i:adj[node])
    {
        if(!visited[i])
        {
            ans(visited,adj,i);
        }
    }
}
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for(auto& i:edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        int count=0;
        vector<bool>visited(n,0);
        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
                ans(visited,adj,i);
                count++;
            }
        }
        return count;
    }
};
