class Solution {
public:
vector<vector<string>>ans;
vector<vector<char>>grid;
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
        vector<string>res2;
        for(int i=0;i<m;i++)
        {
            string res;
            for(int j=0;j<m;j++)
            {
                res+=grid[i][j];
            }
            res2.push_back(res);
        }
        ans.push_back(res2);
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
        grid.resize(n,vector<char>(n,'.'));
        m=n;
        fn(0);
        return ans;
    }
};
