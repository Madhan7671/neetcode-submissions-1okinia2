class Solution {
public:
vector<vector<string>>ans;
int m;
vector<vector<char>>grid;
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
        vector<string>res;
        for(int i=0;i<m;i++)
        {
            string ans2;
            for(int j=0;j<m;j++)
            {
                ans2+=grid[i][j];
            }
            res.push_back(ans2);
        }
        ans.push_back(res);
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
    vector<vector<string>> solveNQueens(int n) {
        m=n;
        grid.resize(n,vector<char>(n,'.'));
        fn(0);
        return ans;
    }
};
