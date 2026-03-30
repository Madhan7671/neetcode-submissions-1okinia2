#include<bits/stdc++.h>
class Solution {
public:
int x,y;
int dp[101][101];
int fn(int i, int j)
{
    if(i>=x || j>=y)
    {
        return 0;
    }
    if(i==x-1 && j==y-1)
    {
        return 1;
    }
    if(dp[i][j]!=-1)
    {
        return(dp[i][j]);
    }
    return(dp[i][j]=fn(i+1,j)+fn(i,j+1));
}
    int uniquePaths(int m, int n) {
        x=m;
        y=n;
        memset(dp,-1,sizeof(dp));
        return(fn(0,0));
    }
};
