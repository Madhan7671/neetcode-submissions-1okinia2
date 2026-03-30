class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;
        pq.push({0,0});
        int count=0;
        int n=points.size();
        vector<bool>visited(n+1,0);
        while(!pq.empty())
        {
            auto[wt,u]=pq.top();
            pq.pop();
            if(visited[u])
            {
                continue;
            }
            visited[u]=true;
            count+=wt;
            for(int i=0;i<n;i++)
            {
                if(!visited[i])
                {
                    int dist=abs(points[u][0]-points[i][0])+abs(points[u][1]-points[i][1]);
                    pq.push({dist,i});
                }
            }
        }
        return count;
    }
};
