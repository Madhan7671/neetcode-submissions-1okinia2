#include<string.h>
class Solution {
public:
int k;
vector<int>arr;
int dp[101];
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
    dp[i]=max(arr[i]+fn(i+2),fn(i+1));
    return(dp[i]);
}
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        arr=nums;
        k=2;
        return(fn(0));
    }
};
