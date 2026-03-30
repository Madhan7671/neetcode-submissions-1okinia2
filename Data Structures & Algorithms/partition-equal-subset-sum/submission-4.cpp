class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%2!=0)
        {
            return(false);
        }
        int t=sum/2;
        vector<int>dp(t+1,0);
        dp[0]=1;
        for(int i:nums)
        {
            for(int j=t;j>=i;j--)
            {
                if(dp[j-i])
                {
                    dp[j]=true;
                }
            }
        }
        return(dp[t]);
    }
};
