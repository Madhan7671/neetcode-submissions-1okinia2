class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int>dist(n+1,INT_MAX);
        dist[k]=0;
        for(int i=1;i<n;i++)
        {
            for(vector<int>& i:times)
            {
                int u=i[0];
                int v=i[1];
                int wt=i[2];
                if(dist[u]!=INT_MAX && dist[v]>dist[u]+wt)
                {
                    dist[v]=dist[u]+wt;
                }
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            if(dist[i]==INT_MAX){
                return -1;
            }
            ans=max(ans,dist[i]);
        }
        return ans;
    }
};
