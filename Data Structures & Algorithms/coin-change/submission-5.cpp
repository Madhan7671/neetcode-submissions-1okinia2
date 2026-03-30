#include<string.h>
class Solution {
public:
int dp[10001];
vector<int>arr;
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
    for(int i=0;i<arr.size();i++)
    {
        if(amount-arr[i]<0)
        {
            continue;
        }
        ans=min(ans,fn(amount-arr[i]));
    }
    if(ans==INT_MAX)
    {
        return(dp[amount]=INT_MAX);
    }
    return(dp[amount]=1+ans);
}
    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));
        arr=coins;
        int ans=fn(amount);
        return(ans==INT_MAX?-1:ans);
    }
};
