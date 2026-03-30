class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int fresh=0;
        int time=0;
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
                if(grid[i][j]==1)
                {
                    fresh++;
                }
            }
        }
        while(!q.empty())
        {
            int x=q.size();
            bool rotten=false;
            for(int k=0;k<x;k++)
            {
                auto&[i,j]=q.front();
                q.pop();
                if(i>0 && grid[i-1][j]==1)
                {
                    fresh--;
                    rotten=true;
                    grid[i-1][j]=2;
                    q.push({i-1,j});
                }
                if(i<m-1 && grid[i+1][j]==1)
                {
                    fresh--;
                    rotten=true;
                    grid[i+1][j]=2;
                    q.push({i+1,j});
                }
                if(j>0 && grid[i][j-1]==1)
                {
                    fresh--;
                    rotten=true;
                    grid[i][j-1]=2;
                    q.push({i,j-1});
                }
                if(j<n-1 && grid[i][j+1]==1)
                {
                    fresh--;
                    rotten=true;
                    grid[i][j+1]=2;
                    q.push({i,j+1});
                }
            }
            if(rotten)
            {
                time++;
            }
        }
        return(fresh==0?time:-1);
    }
};
