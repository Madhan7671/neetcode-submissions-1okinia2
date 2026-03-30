class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        sort(nums.begin(),nums.end());
        int res=0;
        int left=0;
        int right=nums.size()-1;
        while(left<=right)
        {
            if(nums[left]+nums[right]<=limit)
            {
                left++;
            }
            res++;
            right--;
        }
        return res;
    }
};