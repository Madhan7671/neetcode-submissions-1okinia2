class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        //insertion sort
        for(int i=1;i<nums.size();i++)
        {
            int key=nums[i];
            int j=i-1;
            while(j>=0 && nums[j]>key)
            {
                nums[j+1]=nums[j];
                j--;
            }
            swap(nums[j+1],key);
        }
        return nums;
    }
};