#include<bits/stdc++.h>
class Solution {
public:
int dp[101][101];
vector<int>arr;
int fn(int i,int j)
{
    if(i>j)
    {
        return 0;
    }
    if(dp[i][j]!=-1)
    {
        return(dp[i][j]);
    }
    int ans=0;
    for(int k=i;k<=j;k++)
    {
        ans=max(ans,arr[i-1]*arr[k]*arr[j+1]+fn(i,k-1)+fn(k+1,j));
    }
    return(dp[i][j]=ans);
}
    int maxCoins(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        arr.clear();
        arr.push_back(1);
        for(int i:nums)
        {
            arr.push_back(i);
        }
        arr.push_back(1);
        return(fn(1,nums.size()));
    }
};
