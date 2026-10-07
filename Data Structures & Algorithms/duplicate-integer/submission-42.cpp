class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int count=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[count])
            {
                return true;
            }
            count++;
                swap(nums[i],nums[count]);
        }
        return false;
    }
};