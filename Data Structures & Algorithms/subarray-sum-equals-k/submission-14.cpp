class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int currsum=0;
        int ans=0;
        for(int i:nums)
        {
            currsum+=i;
            int diff=currsum-k;
            ans+=mp[diff];
            mp[currsum]++;
        }
        return ans;
    }
};