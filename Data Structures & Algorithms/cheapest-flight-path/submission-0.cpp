class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int>dist(n,INT_MAX);
        dist[src]=0;
        for(int i=0;i<=k;i++)
        {
            vector<int>temp=dist;
            bool updated=false;
            for(auto& j:flights)
            {
                int u=j[0];
                int v=j[1];
                int wt=j[2];
                if(dist[u]!=INT_MAX && dist[u]+wt<temp[v])
                {
                    temp[v]=dist[u]+wt;
                    updated=true;
                }
            }
            if(!updated)
            {
                break;
            }
            dist=temp;
        }
        return(dist[dst]==INT_MAX?-1:dist[dst]);
    }
};
