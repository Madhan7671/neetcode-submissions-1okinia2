class Solution {
public:
vector<vector<char>>grid;
vector<vector<string>>ans;
int n;
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
    for(int i=row,j=col;i>=0 && j<n;i--,j++)
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
        vector<string>res1;
        for(int i=0;i<n;i++)
        {
            string res;
            for(int j=0;j<n;j++)
            {
                res+=grid[i][j];
            }
        res1.push_back(res);
        }
        ans.push_back(res1);
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
    vector<vector<string>> solveNQueens(int m) {
        n=m;
        grid.resize(m,vector<char>(m,'.'));
        fn(0);
        return ans;
    }
};
