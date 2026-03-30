class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int a=0;
        for(int i:nums)
        {
            a|=i;
        }
        int n=nums.size();
        return(a*(1<<(n-1)));
    }
};