#include<bits/stdc++.h>
class Solution {
public:
int dp[21][1001];
int offset=1001;
vector<int>arr;
int fn(int i,int sum,int target)
{
    if(i==arr.size())
    {
        return(sum==target ? 1 : 0);
    }
    if(dp[i][sum+offset]!=-1)
    {
        return(dp[i][sum+offset]);
    }
    int add=fn(i+1,sum+arr[i],target);
    int sub=fn(i+1,sum-arr[i],target);
    return(dp[i][sum+offset]=add+sub);
}
    int findTargetSumWays(vector<int>& nums, int target) {
        memset(dp,-1,sizeof(dp));
        arr=nums;
        return(fn(0,0,target));
    }
};
