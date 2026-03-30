#include<string.h>
class Solution {
public:
int m,n;
int dp[101][101];
int fn(int i,int j)
{
    if(i>=m || j>=n)
    {
        return 0;
    }
    if(i==m-1 && j==n-1)
    {
        return 1;
    }
    if(dp[i][j]!=-1)
    {
        return (dp[i][j]);
    }
    return(dp[i][j]=fn(i+1,j)+fn(i,j+1));
}
    int uniquePaths(int x, int y) {
        memset(dp,-1,sizeof(dp));
        m=x;
        n=y;
        return(fn(0,0));
    }
};
