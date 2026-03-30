class Solution {
public:
    int maxArea(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int ans=0;
        while(left<=right)
        {
            if(nums[left] < nums[right])
            {
                ans=max(ans,nums[left]*(right-left));
                left++;
            }
            else{
                ans=max(ans,nums[right]*(right-left));
                right--;
            }
        }
        return ans;
    }
};
