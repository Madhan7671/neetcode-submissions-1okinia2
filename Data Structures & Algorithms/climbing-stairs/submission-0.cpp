class Solution {
public:
vector<int>dp;
int fn(int n)
{
    if(n<=1)
    {
        return 1;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    dp[n]=fn(n-1)+fn(n-2);
    return(dp[n]);
}
    int climbStairs(int n) {
        dp.assign(n+1,-1);
        return(fn(n));
    }
};
