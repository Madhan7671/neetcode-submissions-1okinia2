class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>>adj(n+1);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;
        pq.push({0,k});
        vector<int>dist(n+1,INT_MAX);
        dist[k]=0;
        for(auto& i:times)
        {
            adj[i[0]].push_back({i[1],i[2]});
        }
        while(!pq.empty())
        {
            int u=pq.top().second;
            pq.pop();
            for(auto& i:adj[u])
            {
                int v=i.first;
                int wt=i.second;
                if(dist[u]!=INT_MAX && dist[v]>dist[u]+wt)
                {
                    dist[v]=dist[u]+wt;
                    pq.push({dist[v],v});
                }
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            if(dist[i]==INT_MAX)
            {
                return -1;
            }
            ans=max(ans,dist[i]);
        }
        return ans;
    }
};
