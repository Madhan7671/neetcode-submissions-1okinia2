class Solution {
public:
int m;
vector<vector<char>>grid;
int count;
bool canplace(int row,int col)
{
    if(row<0 || col<0 || row>=m || col>=m)
    {
        return false;
    }
    for(int i=row;i>=0;i--)
    {
        if(grid[i][col]=='Q')
        {
            return false;
        }
    }
    for(int i=row,j=col;i>=0 && j>=0;i--,j--)
    {
        if(grid[i][j]=='Q')
        {
            return false;
        }
    }
    for(int i=row,j=col;i>=0 && j<m;i--,j++)
    {
        if(grid[i][j]=='Q')
        {
            return false;
        }
    }
    return true;
}
void fn(int row)
{
    if(row==m)
    {
        count++;
    }
    for(int i=0;i<m;i++)
    {
        if(canplace(row,i))
        {
            grid[row][i]='Q';
            fn(row+1);
            grid[row][i]='.';
        }
    }
}
    int totalNQueens(int n) {
        m=n;
        count=0;
        grid.resize(m,vector<char>(m,'.'));
        fn(0);
        return count;
    }
};