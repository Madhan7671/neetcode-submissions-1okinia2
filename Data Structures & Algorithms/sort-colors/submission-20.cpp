class Solution {
public:
    void sortColors(vector<int>& nums) {
        int m=0,l=0,r=nums.size()-1;
        while(m<=r)
        {
            if(nums[m]==0)
            {
                swap(nums[l],nums[m]);
                l++;
                m++;
            }
            else if(nums[m]==1)
            {
                m++;
            }
            else{
                swap(nums[r],nums[m]);
                r--;
            }
        }
    }
};