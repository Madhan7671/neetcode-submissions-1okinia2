#include<bits/stdc++.h>
class Solution {
public:
vector<int>arr;
int dp[101];
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
    return(dp[i]=max(arr[i]+fn(i+2,n),fn(i+1,n)));
}
    int rob(vector<int>& nums) {
        arr=nums;
        int n=nums.size();
        if(n==1)
        {
            return(arr[0]);
        }
        if(n==2)
        {
            return(max(arr[0],arr[1]));
        }
        memset(dp,-1,sizeof(dp));
        int f1=fn(0,n-2);
        memset(dp,-1,sizeof(dp));
        int f2=fn(1,n-1);
        return(max(f1,f2));
    }
};
