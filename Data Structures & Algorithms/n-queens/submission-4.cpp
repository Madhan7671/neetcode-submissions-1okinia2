class Solution {
public:
vector<vector<char>>grid;
vector<vector<string>>ans;
int m;
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
        vector<string>res1;
        for(int i=0;i<m;i++)
        {
            string res2;
            for(int j=0;j<m;j++)
            {
                res2+=grid[i][j];
            }
            res1.push_back(res2);
        }
        ans.push_back(res1);
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
        return(ans);
    }
};
