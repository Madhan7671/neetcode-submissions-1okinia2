class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res=nums[0];
        int minval=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            minval=max(nums[i],minval+nums[i]);
            res=max(res,minval);
        }
        return res;
    }
};
