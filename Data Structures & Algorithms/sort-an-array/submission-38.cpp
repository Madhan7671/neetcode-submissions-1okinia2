class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        //quick sort
        quicksort(nums,0,nums.size()-1);
        return nums;
    }
    void quicksort(vector<int>& nums,int left,int right)
    {
        if(left<right)
        {
            int p=partation(nums,left,right);
            quicksort(nums,left,p-1);
            quicksort(nums,p+1,right);
        }
    }
    //laumoto partation
    int partation(vector<int>& nums,int left,int right)
    {
        int pivot=nums[right];
        int i=left-1;
        for(int j=left;j<right;j++)
        {
            if(nums[j]<pivot)
            {
                i++;
                swap(nums[i],nums[j]);
            }
        }
        swap(nums[i+1],nums[right]);
        return (i+1);
    }
};