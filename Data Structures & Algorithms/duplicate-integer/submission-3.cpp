class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0)
        {
            return false;
        }
        int res=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[res-1])
            {
                return true;;
            }
            else if(nums[i]!=nums[res-1])
            {
                nums[res]=nums[i];
                res++;
            }
        }
        return false;
    }
};