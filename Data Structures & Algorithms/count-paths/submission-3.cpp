#include<bits/stdc++.h>
class Solution {
public:
int dp[101][101];
int a,b;
int fn(int i,int j)
{
    if(i<0 || i>=a || j<0 || j>=b)
    {
        return 0;
    }
    if(dp[i][j]!=-1)
    {
        return(dp[i][j]);
    }
    if(i==a-1 && j==b-1)
    {
        return 1;
    }
    return(dp[i][j]=fn(i+1,j)+fn(i,j+1));
}
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
        a=m;
        b=n;
        return(fn(0,0));
    }
};
