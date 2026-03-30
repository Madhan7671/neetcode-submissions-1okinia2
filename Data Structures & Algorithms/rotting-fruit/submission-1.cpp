class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int fresh=0;
        int m,n;
        m=grid.size();
        n=grid[0].size();
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
        int time=0;
        while(!q.empty())
        {
            int x=q.size();
            bool rotten=false;
            for(int i=0;i<x;i++)
            {
                auto&[r,c]=q.front();
                q.pop();
                if(r-1>=0 && grid[r-1][c]==1)
                {
                    grid[r-1][c]=2;
                    fresh--;
                    rotten=true;
                    q.push({r-1,c});
                }
                if(r+1<m && grid[r+1][c]==1)
                {
                    grid[r+1][c]=2;
                    fresh--;
                    rotten=true;
                    q.push({r+1,c});
                }
                if(c-1>=0 && grid[r][c-1]==1)
                {
                    grid[r][c-1]=2;
                    fresh--;
                    rotten=true;
                    q.push({r,c-1});
                }
                if(c+1<n && grid[r][c+1]==1)
                {
                    grid[r][c+1]=2;
                    fresh--;
                    rotten=true;
                    q.push({r,c+1});
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
