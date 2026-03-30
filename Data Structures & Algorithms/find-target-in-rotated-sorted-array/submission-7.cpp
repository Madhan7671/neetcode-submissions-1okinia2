class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        while(low<high)
        {
            int mid=(high+low)/2;
            if(nums[mid]<nums[high])
            {
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        int pivot=low;
        low=0;
        high=nums.size()-1;
        if(nums[pivot]<=target && nums[high]>=target)
        {
            low=pivot;
        }
        else{
            high=pivot-1;
        }
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
    }
};
