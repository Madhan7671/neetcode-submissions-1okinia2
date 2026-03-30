class Solution {
public:
int m,n;
vector<vector<char>>board;
void fn(int i,int j)
{
    if(i<0 || j<0 || i>=m || j>=n || board[i][j]=='0')
    {
        return;
    }
    board[i][j]='0';
    fn(i+1,j);
    fn(i-1,j);
    fn(i,j+1);
    fn(i,j-1);
}
    int numIslands(vector<vector<char>>& grid) {
        board=grid;
        m=grid.size();
        n=grid[0].size();
        int count=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]=='1')
                {
                    fn(i,j);
                    count++;
                }
            }
        }
        return count;
    }
};
