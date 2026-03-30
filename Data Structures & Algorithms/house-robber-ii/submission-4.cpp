#include<string.h>
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
        return dp[i];
    }
    return(dp[i]=max(arr[i]+fn(i+2,n),fn(i+1,n)));
}
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        arr=nums;
        int n=nums.size();
        if(n==1)
        {
            return arr[0];
        }
        if(n==2)
        {
            return(max(arr[0],arr[1]));
        }
        int ans1=fn(0,n-2);
        memset(dp,-1,sizeof(dp));
        int ans2=fn(1,n-1);
        return(max(ans1,ans2));
    }
};
