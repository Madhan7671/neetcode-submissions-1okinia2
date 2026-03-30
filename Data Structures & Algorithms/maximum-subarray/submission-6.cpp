class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxe=nums[0];
        int res=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            maxe=max(nums[i],maxe+nums[i]);
            res=max(res,maxe);
        }
        return res;
    }
};
