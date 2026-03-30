class Solution {
public:
vector<vector<char>>grid;
vector<vector<string>>ans;
int m;
bool weplace(int row,int col)
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
void fn(int row,int n)
{
    if(row==n)
    {
        vector<string>res;
        for(int i=0;i<row;i++)
        {
            string ans2;
            for(int j=0;j<n;j++)
            {
                ans2+=grid[i][j];
            }
            res.push_back(ans2);
        }
        ans.push_back(res);
    }
    for(int j=0;j<n;j++)
    {
        if(weplace(row,j))
        {
            grid[row][j]='Q';
            fn(row+1,n);
            grid[row][j]='.';
        }
    }

}
    vector<vector<string>> solveNQueens(int n) {
        grid.resize(n,vector<char>(n,'.'));
        m=n;
        fn(0,n);
        return(ans);
    }
};
