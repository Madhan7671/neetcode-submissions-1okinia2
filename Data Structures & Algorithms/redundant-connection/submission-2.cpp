class Solution {
public:
vector<int>parent;
int par(int i)
{
    if(parent[i]==i)
    {
        return i;
    }
    return(parent[i]=par(parent[i]));
}
bool uni(int i,int j)
{
    int pi=par(i);
    int pj=par(j);
    if(pi==pj)
    {
        return false;
    }
    parent[pj]=pi;
    return true;
}
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        parent.resize(n+1);
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
