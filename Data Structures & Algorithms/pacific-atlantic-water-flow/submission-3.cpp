class Solution {
public:
int m,n;
vector<vector<int>>grid;
void fn(int i,int j,vector<vector<int>>& pa,int prev)
{
    if(i<0 || j<0 || i>=m || j>=n || pa[i][j]==1 || grid[i][j]<prev)
    {
        return;
    }
    pa[i][j]=1;
    fn(i+1,j,pa,grid[i][j]);
    fn(i-1,j,pa,grid[i][j]);
    fn(i,j+1,pa,grid[i][j]);
    fn(i,j-1,pa,grid[i][j]);
}
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        grid=heights;
        vector<vector<int>>ans;
        m=grid.size();
        n=grid[0].size();
        vector<vector<int>>pa(m,vector<int>(n,0));
        vector<vector<int>>at(m,vector<int>(n,0));
        for(int i=0;i<n;i++)
        {
            fn(0,i,pa,INT_MIN);
            fn(m-1,i,at,INT_MIN);
        }
        for(int i=0;i<m;i++)
        {
            fn(i,0,pa,INT_MIN);
            fn(i,n-1,at,INT_MIN);
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
