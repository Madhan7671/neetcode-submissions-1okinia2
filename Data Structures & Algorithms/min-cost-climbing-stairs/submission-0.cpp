#include<string.h>
class Solution {
public:
int dp[101];
vector<int>arr;
int k;
int fn(int i)
{
    if(i>=arr.size())
    {
        return 0;
    }
    if(dp[i]!=-1)
    {
        return dp[i];
    }
    int ans=INT_MAX;
    for(int j=1;j<=k;j++)
    {
        if(i+j<=arr.size())
        {
            ans=min(ans,arr[i]+fn(i+j));
        }
    }
    return(dp[i]=ans);
}
    int minCostClimbingStairs(vector<int>& cost) {
        arr=cost;
        k=2;
        memset(dp,-1,sizeof(dp));
        return(min(fn(0),fn(1)));
    }
};
