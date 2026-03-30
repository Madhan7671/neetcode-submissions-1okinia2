class Solution {
public:
vector<vector<int>>ans,grid;
int m,n;
void dfs(vector<vector<int>>& pa,int i,int j,int prev)
{
    if(i<0 || j<0 || i>=m || j>=n || pa[i][j]==1 || grid[i][j]<prev)
    {
        return;
    }
    pa[i][j]=1;
    dfs(pa,i+1,j,grid[i][j]);
    dfs(pa,i-1,j,grid[i][j]);
    dfs(pa,i,j+1,grid[i][j]);
    dfs(pa,i,j-1,grid[i][j]);
}
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        grid=heights;
        m=heights.size();
        n=heights[0].size();
        vector<vector<int>>pa(m,vector<int>(n,0));
        vector<vector<int>>at(m,vector<int>(n,0));
        for(int i=0;i<n;i++)
        {
            dfs(pa,0,i,INT_MIN);
            dfs(at,m-1,i,INT_MIN);
        }
        for(int i=0;i<m;i++)
        {
            dfs(pa,i,0,INT_MIN);
            dfs(at,i,n-1,INT_MIN);
        }
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
