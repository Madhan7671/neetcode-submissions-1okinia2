class Solution {
public:
vector<vector<int>>board;
int m,n;
int fn(int i,int j)
{
    if(i<0 || j<0 || i>=m || j>=n || board[i][j]==0)
    {
        return 0;
    }
    board[i][j]=0;
    int res=1;
    res+=fn(i+1,j);
    res+=fn(i-1,j);
    res+=fn(i,j+1);
    res+=fn(i,j-1);
    return(res);
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        board=grid;
        m=grid.size();
        n=grid[0].size();
        int ans=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    ans=max(ans,fn(i,j));
                }
            }
        }
        return ans;
    }
};
