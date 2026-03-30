class Solution {
public:
    int maxArea(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int ans=0;
        while(low<=high)
        {
            if(nums[low]<nums[high])
            {
                ans=max(ans,nums[low]*(high-low));
                low++;
            }
            else{
                ans=max(ans,nums[high]*(high-low));
                high--;
            }
        }
        return ans;
    }
};
