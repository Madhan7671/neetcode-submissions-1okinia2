class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        while(low<high)
        {
            int m=(low+high)/2;
            if(nums[m]>nums[high])
            {
                low=m+1;
            }
            else{
                high=m;
            }
        }
        int pivot=low;
        low=0;
        high=nums.size()-1;
        if(nums[pivot]<=target && target<=nums[high])
        {
            low=pivot;
        }
        else{
            high=pivot-1;
        }
        while(low<=high)
        {
            int m=(low+high)/2;
            if(nums[m]==target)
            {
                return m;
            }
            else if(nums[m]<target)
            {
                low=m+1;
            }
            else{
                high=m-1;
            }
        }
        return -1;
    }
};
