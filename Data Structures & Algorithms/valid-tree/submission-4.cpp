class Solution {
public:
vector<vector<int>>adj;
vector<bool>visited;
bool fn(int i,int parent)
{
    visited[i]=true;
    for(int j:adj[i])
    {
        if(!visited[j])
        {
            if(fn(j,i))
            {
                return true;
            }
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
        adj.resize(n);
        visited.resize(n,false);
        for(auto& i:edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        if(fn(0,-1))
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
