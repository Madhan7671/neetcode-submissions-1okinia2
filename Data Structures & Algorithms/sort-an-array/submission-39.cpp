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
            quicksort(nums,left,p);
            quicksort(nums,p+1,right);
        }
    }
    //hoare's partation
    int partation(vector<int>& nums,int left,int right)
    {
        int pivot=nums[left];
        int i=left-1;
        int j=right+1;
        while(true)
        {
            do{
                i++;
            }while(nums[i]<pivot);
            do{
                j--;
            }while(nums[j]>pivot);
            if(i>=j)
            {
                return j;
            }
            swap(nums[i],nums[j]);
        }
    }
};