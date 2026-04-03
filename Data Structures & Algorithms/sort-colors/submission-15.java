class Solution {
    public void sortColors(int[] nums) {
        int l=0;
        int m=0;
        int r=nums.length-1;
        while(m<=r)
        {
            if(nums[m]==0)
            {
                int x=nums[l];
                nums[l]=nums[m];
                nums[m]=x;
                m++;
                l++;
            }
            else if(nums[m]==1)
            {
                m++;
            }
            else{
                int y=nums[m];
                nums[m]=nums[r];
                nums[r]=y;
                r--;
            }
        }
    }
}