class Solution {
public:
vector<vector<char>>grid;
int m,n;
void fn(int i,int j)
{
    if(i>=m || j>=n || i<0 || j<0 || grid[i][j]!='O')
    {
        return;
    }
    grid[i][j]='t';
    fn(i+1,j);
    fn(i-1,j);
    fn(i,j+1);
    fn(i,j-1);
}
    void solve(vector<vector<char>>& board) {
        grid=board;
        m=grid.size();
        n=grid[0].size();
        for(int i=0;i<m;i++)
        {
            fn(i,0);
            fn(i,n-1);
        }
        for(int j=0;j<n;j++)
        {
            fn(0,j);
            fn(m-1,j);
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='O')
                {
                    grid[i][j]='X';
                }
                if(grid[i][j]=='t')
                {
                    grid[i][j]='O';
                }
            }
        }
        board=grid;
    }
};
