class Solution {
public:
vector<vector<string>>ans;
vector<vector<char>>grid;
int n;
int count;
bool canplace(int row,int col)
{
    if(row<0 || col<0 || row>=n || col>=n)
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
    for(int i=row,j=col;i>=0&& j<n;i--,j++)
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
    if(row==n)
    {
        count++;
    }
    for(int i=0;i<n;i++)
    {
        if(canplace(row,i))
        {
            grid[row][i]='Q';
            fn(row+1);
            grid[row][i]='.';
        }
    }
}
    int totalNQueens(int m) {
        n=m;
        count=0;
        grid.resize(n,vector<char>(n,'.'));
        fn(0);
        return count;
    }
};