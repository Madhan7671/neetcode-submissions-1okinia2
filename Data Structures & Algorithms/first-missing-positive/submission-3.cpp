class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int miss=1;
        for(int i:nums)
        {
            if(i>0 && i==miss)
            {
                miss++;
            }
        }
        return miss;
    }
};