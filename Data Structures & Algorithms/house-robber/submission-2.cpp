#include<bits/stdc++.h>
class Solution {
public:
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
    return(dp[i]=max(fn(i+2)+arr[i],fn(i+1)));
}
    int rob(vector<int>& nums) {
        arr=nums;
        memset(dp,-1,sizeof(dp));
        return(fn(0));
    }
};
