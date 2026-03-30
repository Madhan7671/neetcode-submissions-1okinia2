class Solution {
public:
vector<bool>visited;
vector<vector<int>>adj;
void fn(int i)
{
    visited[i]=true;
    for(int j:adj[i])
    {
        if(!visited[j])
        {
            fn(j);
        }
    }
}
    int countComponents(int n, vector<vector<int>>& edges) {
        int count=0;
        adj.resize(n);
        visited.resize(n,false);
        for(auto& i:edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
                fn(i);
                count++;
            }
        }
        return count;
    }
};
