#include<bits/stdc++.h>
class Solution {
public:
int dp[101];
int k=2;
vector<int>arr;
int fn(int i)
{
    if(i>=arr.size())
    {
        return 0;
    }
    if(dp[i]!=-1)
    {
        return(dp[i]);
    }
    int ans=INT_MAX;
    for(int j=i+1;j<=i+k;j++)
    {
        ans=min(ans,arr[i]+fn(j));
    }
    return(dp[i]=ans);
}
    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp,-1,sizeof(dp));
        arr=cost;
        return(min(fn(0),fn(1)));
    }
};
