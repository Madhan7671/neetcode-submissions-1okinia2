class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int m=0;
        while(m<=right)
        {
            if(nums[m]==0)
            {
                swap(nums[m],nums[left]);
                left++;
                m++;
            }
            else if(nums[m]==1)
            {
                m++;
            }
            else{
                swap(nums[m],nums[right]);
                right--;
            }
        }
    }
};