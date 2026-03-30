#include<bits/stdc++.h>
class Solution {
public:
int dp[10001];
vector<int>coin;
int fn(int amount)
{
    if(amount<=0)
    {
        return 0;
    }
    if(dp[amount]!=-1)
    {
        return(dp[amount]);
    }
    int ans=INT_MAX;
    for(int i=0;i<coin.size();i++)
    {
        if(amount-coin[i]<0)
        {
            continue;
        }
        ans=min(ans,fn(amount-coin[i]));
    }
    if(ans==INT_MAX)
    {
        return(dp[amount]=INT_MAX);
    }
    return(dp[amount]=ans+1);
}
    int coinChange(vector<int>& coins, int amount) {
        coin=coins;
        memset(dp,-1,sizeof(dp));
        int ans=fn(amount);
        return(ans==INT_MAX?-1:ans);
    }
};
