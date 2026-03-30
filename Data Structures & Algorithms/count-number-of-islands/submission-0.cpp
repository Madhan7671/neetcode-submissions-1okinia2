class Solution {
public:
void ans(vector<vector<char>>& grid,int i,int j,int m,int n){
    if(i<0 || j<0 || j>=n || i>=m || grid[i][j]=='0')
    {
        return;
    }
    grid[i][j]='0';
    ans(grid,i+1,j,m,n);
    ans(grid,i-1,j,m,n);
    ans(grid,i,j+1,m,n);
    ans(grid,i,j-1,m,n);
}
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int count=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1')
                {
                    ans(grid,i,j,m,n);
                    count++;
                }
            }
        }
        return count;
    }
};
