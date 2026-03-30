class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int a=0;
        int n=nums.size();
        for(int i:nums)
        {
            a|=i;
        }
        return(a*(1<<(n-1)));
    }
};