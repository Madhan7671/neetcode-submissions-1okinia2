class Solution {
public:
vector<int>dp,arr;
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
        dp.resize(103,-1);
        arr=nums;
        return(fn(0));
    }
};
