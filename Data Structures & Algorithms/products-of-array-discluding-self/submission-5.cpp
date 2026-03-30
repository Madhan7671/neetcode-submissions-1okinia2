class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans1(n,1);
        vector<int>ans2(n,1);
        for(int i=1;i<nums.size();i++)
        {
            ans1[i]=nums[i-1]*ans1[i-1];
        }
        for(int i=nums.size()-2;i>=0;i--)
        {
            ans2[i]=ans2[i+1]*nums[i+1];
        }
        vector<int>mad(n);
        for(int i=0;i<nums.size();i++)
        {
            mad[i]=ans1[i]*ans2[i];
        }
        return mad;
    }
};
