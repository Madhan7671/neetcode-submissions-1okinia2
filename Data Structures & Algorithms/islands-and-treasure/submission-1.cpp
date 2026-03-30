class Solution {
public:
int m,n;
vector<vector<int>>mat;
void dfs(int i,int j,int dist)
{
    if(i<0 || j<0 || i>=m || j>=n || mat[i][j]<dist)
    {
        return;
    }
    mat[i][j]=dist;
    dfs(i+1,j,dist+1);
    dfs(i-1,j,dist+1);
    dfs(i,j+1,dist+1);
    dfs(i,j-1,dist+1);
}
    void islandsAndTreasure(vector<vector<int>>& grid) {
        mat=grid;
        m=grid.size();
        n=grid[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==0)
                {
                    dfs(i,j,0);
                }
            }
        }
        grid=mat;
    }
};
