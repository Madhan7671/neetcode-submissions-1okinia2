class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=1;
        for(int i:nums)
        {
            if(i>=1 && ans==i)
            {
                ans++;
            }
        }
        return ans;
    }
};