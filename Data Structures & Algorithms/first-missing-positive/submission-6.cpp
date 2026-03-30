class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=1;
        for(int i:nums)
        {
            if(i>0 && i==ans)
            {
                ans++;
            }
        }
        return ans;
    }
};