class Solution {
public:
vector<vector<int>>grid;
int m,n;
void dfs(int i,int j,vector<vector<int>>& pa,int prev)
{
    if(i<0 || j<0 || i>=m|| j>=n || pa[i][j]==1 || grid[i][j]<prev)
    {
        return;
    }
    pa[i][j]=1;
    dfs(i+1,j,pa,grid[i][j]);
    dfs(i-1,j,pa,grid[i][j]);
    dfs(i,j+1,pa,grid[i][j]);
    dfs(i,j-1,pa,grid[i][j]);
}
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        m=heights.size();
        n=heights[0].size();
        grid=heights;
        vector<vector<int>>at(m,vector<int>(n,0));
        vector<vector<int>>pa(m,vector<int>(n,0));
        for(int i=0;i<n;i++)
        {
            dfs(0,i,pa,INT_MIN);
            dfs(m-1,i,at,INT_MIN);
        }
        for(int i=0;i<m;i++)
        {
            dfs(i,0,pa,INT_MIN);
            dfs(i,n-1,at,INT_MIN);
        }
        vector<vector<int>>ans;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(pa[i][j]==1 && at[i][j]==1)
                {
                    ans.push_back({i,j});
                }
            }
        }
        return ans;
    }
};
