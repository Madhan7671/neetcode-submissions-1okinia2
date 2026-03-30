class Solution {
public:
vector<vector<char>>grid;
int m,n;
void fn(int i,int j)
{
    if(i<0 || j<0 || i>=m || j>=n || grid[i][j]!='O')
    {
        return;
    }
    grid[i][j]='m';
    fn(i+1,j);
    fn(i-1,j);
    fn(i,j+1);
    fn(i,j-1);
}
    void solve(vector<vector<char>>& board) {
        m=board.size();
        n=board[0].size();
        grid=board;
        for(int i=0;i<m;i++)
        {
            fn(i,0);
            fn(i,n-1);
        }
        for(int i=0;i<n;i++)
        {
            fn(0,i);
            fn(m-1,i);
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='O')
                {
                    grid[i][j]='X';
                }
                if(grid[i][j]=='m')
                {
                    grid[i][j]='O';
                }
            }
        }
        board=grid;
    }
};
