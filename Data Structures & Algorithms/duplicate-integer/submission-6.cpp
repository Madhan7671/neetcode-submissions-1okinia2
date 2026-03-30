class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int res=1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[res-1])
            {
                return true;
            }
            res=i;
            res++;
        }
        return false;
    }
};