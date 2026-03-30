#include<bits/stdc++.h>
class Solution {
public:
int m,n;
int dp[101][101];
vector<vector<int>>grid;
int fn(int i,int j)
{
    if(dp[i][j]!=-1)
    {
        return(dp[i][j]);
    }
    int best=1;
    if(i>0 && grid[i-1][j]>grid[i][j])
    {
        best=max(best,1+fn(i-1,j));
    }
    if(i<m-1 && grid[i+1][j] > grid[i][j])
    {
        best=max(best,1+fn(i+1,j));
    }
    if(j>0 && grid[i][j-1] > grid[i][j])
    {
        best=max(best,1+fn(i,j-1));
    }
    if(j<n-1 && grid[i][j+1] > grid[i][j])
    {
        best=max(best,1+fn(i,j+1));
    }
    dp[i][j]=best;
    return(dp[i][j]);
}
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        m=matrix.size();
        memset(dp,-1,sizeof(dp));
        n=matrix[0].size();
        grid=matrix;
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
