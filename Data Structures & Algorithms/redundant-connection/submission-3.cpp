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
    int pai=par(i);
    int paj=par(j);
    if(pai==paj)
    {
        return false;
    }
    parent[paj]=pai;
    return true;
}
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        parent.resize(n);
        for(int i=1;i<=n;i++)
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
