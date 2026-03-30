class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        priority_queue<vector<int>,vector<vector<int>>,greater<>>pq;
        int n=grid.size();

        vector<vector<bool>>visited(n,vector<bool>(n,false));
        pq.push({grid[0][0],0,0});
        while(!pq.empty())
        {
            auto tip=pq.top();
            pq.pop();
            int level=tip[0];
            int i=tip[1];
            int j=tip[2];
            if(i==n-1 && j==n-1)
            {
                return level;
            }
            if(visited[i][j])
            {
                continue;
            }
            visited[i][j]=true;
            if(i>0 && !visited[i-1][j])
            {
                pq.push({max(level,grid[i-1][j]),i-1,j});
            }
            if(i<n-1 && !visited[i+1][j])
            {
                pq.push({max(level,grid[i+1][j]),i+1,j});
            }
            if(j>0 && !visited[i][j-1])
            {
                pq.push({max(level,grid[i][j-1]),i,j-1});
            }
            if(j<n-1 && !visited[i][j+1])
            {
                pq.push({max(level,grid[i][j+1]),i,j+1});
            }
        }
        return -1;
    }
};
