class Solution {
public:
vector<int>arr,dp;
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
    dp[i]=max(arr[i]+fn(i+2,n),fn(i+1,n));
    return(dp[i]);
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        {
            return nums[0];
        }
        if(n==2)
        {
            return max(nums[0],nums[1]);
        }
        arr=nums;
        dp.assign(n+1,-1);
        int ans1=fn(0,n-2);
        dp.clear();
        dp.assign(n+1,-1);
        int ans2=fn(1,n-1);
        return(max(ans1,ans2));
    }
};
