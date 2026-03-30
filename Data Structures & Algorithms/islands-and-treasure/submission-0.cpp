class Solution {
public:
int m,n;
vector<vector<int>>mat;
void fn(int i,int j,int dist)
{
    if(i<0 || j<0 || i>=m || j>=n || mat[i][j]<dist)
    {
        return;
    }
    mat[i][j]=dist;
    fn(i+1,j,dist+1);
    fn(i-1,j,dist+1);
    fn(i,j-1,dist+1);
    fn(i,j+1,dist+1);
}
    void islandsAndTreasure(vector<vector<int>>& grid) {
        m=grid.size();
        mat=grid;
        n=grid[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==0)
                {
                    fn(i,j,0);
                }
            }
        }
        grid=mat;
    }
};
