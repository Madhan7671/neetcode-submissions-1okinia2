class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=nums[0];
        int maxe=nums[0];
        int mini=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                swap(maxe,mini);
            }
            maxe=max(nums[i],nums[i]*maxe);
            mini=min(nums[i],nums[i]*mini);
            ans=max(ans,maxe);
        }
        return ans;
    }
};
