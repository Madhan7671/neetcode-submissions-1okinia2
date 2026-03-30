class Solution {
public:
int m,n;
vector<vector<int>>mat;
int fn(int i,int j)
{
    if(i<0 || j<0 ||i>=m || j>=n || mat[i][j]==0)
    {
        return 0;
    }
    int res=1;
    mat[i][j]=0;
    res+=fn(i+1,j);
    res+=fn(i-1,j);
    res+=fn(i,j+1);
    res+=fn(i,j-1);
    return res;
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int area=0;
        mat=grid;
        m=grid.size();
        n=grid[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==1)
                {
                    area=max(area,fn(i,j));
                }
            }
        }
        return area;
    }
};
