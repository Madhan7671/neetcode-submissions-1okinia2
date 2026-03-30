#include<bits/stdc++.h>
class Solution {
public:
int dp[101];
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
    return(dp[i]=max(arr[i]+fn(i+2),fn(i+1)));
}
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        arr=nums;
        return(fn(0));
    }
};
