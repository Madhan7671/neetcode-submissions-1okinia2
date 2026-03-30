#include<bits/stdc++.h>
class Solution {
public:
int dp[101];
vector<int>arr;
int fn(int i,int n)
{
    if(i>n)
    {
        return 0;
    }
    if(dp[i]!=-1)
    {
        return(dp[i]);
    }
    return(dp[i]=max(fn(i+1,n),arr[i]+fn(i+2,n)));
}
    int rob(vector<int>& nums) {
        arr=nums;
        if(nums.size()==1)
        {
            return nums[0];
        }
        if(nums.size()==2)
        {
            return(max(nums[0],nums[1]));
        }
        int n=nums.size();
        memset(dp,-1,sizeof(dp));
        int ans1=fn(0,n-2);
        memset(dp,-1,sizeof(dp));
        int ans2=fn(1,n-1);
        return(max(ans1,ans2));
    }
};
