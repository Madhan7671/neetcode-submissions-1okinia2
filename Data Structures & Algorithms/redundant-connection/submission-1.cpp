class Solution {
public:
vector<int>parent;
int par(int i)
{
    if(parent[i]==i)
    {
        return(i);
    }
    return(parent[i]=par(parent[i]));
}
bool uni(int i,int j)
{
    int u=par(i);
    int v=par(j);
    if(u==v)
    {
        return false;
    }
    parent[v]=u;
    return true;
}
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        parent.resize(n+1,0);
        for(int i=0;i<n;i++)
        {
            parent[i]=i;
        }
        for(auto& i:edges)
        {
            if(!uni(i[0],i[1]))
            {
                return i;
            }
        }
        return {};
    }
};
