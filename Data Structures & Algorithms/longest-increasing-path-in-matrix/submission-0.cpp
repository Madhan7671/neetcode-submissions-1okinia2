#include<string.h>
class Solution {
public:
vector<vector<int>>grid;
int dp[101][101];
int n,m;
int fn(int i,int j)
{
    if(dp[i][j]!=-1)
    {
        return(dp[i][j]);
    }
    int best=1;
    if(i-1>=0 && grid[i-1][j]>grid[i][j])
    {
        best=max(best,1+fn(i-1,j));
    }
    if(i+1<m && grid[i+1][j]>grid[i][j])
    {
        best=max(best,1+fn(i+1,j));
    }
    if(j-1>=0 && grid[i][j-1]>grid[i][j])
    {
        best=max(best,1+fn(i,j-1));
    }
    if(j+1<n && grid[i][j+1] > grid[i][j])
    {
        best=max(best,1+fn(i,j+1));
    }
    return(dp[i][j]=best);
}
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        grid=matrix;
        m=matrix.size();
        n=matrix[0].size();
        memset(dp,-1,sizeof(dp));
        int ans=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans=max(ans,fn(i,j));
            }
        }
        return ans;
    }
};
