class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int maxi=nums[0];
        int ans=0;
        for(int i=1;i<nums.size();i++)
        {
            ans=max(ans,nums[i]-maxi);
            maxi=min(maxi,nums[i]);
        }
        return ans;
    }
};
