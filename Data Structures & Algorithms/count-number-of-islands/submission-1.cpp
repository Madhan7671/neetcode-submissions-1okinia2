class Solution {
public:
int m,n;
void fn(vector<vector<char>>& grid,int i,int j)
{
    if(i<0 || j<0 || i>=m || j>=n || grid[i][j]=='0')
    {
        return;
    }
    grid[i][j]='0';
    fn(grid,i+1,j);
    fn(grid,i-1,j);
    fn(grid,i,j+1);
    fn(grid,i,j-1);
}
    int numIslands(vector<vector<char>>& grid) {
        m=grid.size();
        n=grid[0].size();
        int count=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1')
                {
                    fn(grid,i,j);
                    count++;
                }
            }
        }
        return count;
    }
};
