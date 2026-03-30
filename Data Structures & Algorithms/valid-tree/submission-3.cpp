class Solution {
public:
vector<bool>visited;
vector<vector<int>>adj;
bool fn(int i,int parent)
{
    visited[i]=true;
    for(auto& j:adj[i])
    {
        if(!visited[j])
        {
            fn(j,i);
        }
        else
        {
            if(j!=parent){
            return true;
            }
        }
    }
    return false;
}
    bool validTree(int n, vector<vector<int>>& edges) {
        adj.resize(n);
        for(auto& i:edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        visited.resize(n,false);
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
