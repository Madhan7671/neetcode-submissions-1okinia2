class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans=0;
        unordered_set<int>st(nums.begin(),nums.end());
        for(int i:nums)
        {
            if(!st.count(i-1))
            {
                int x=i+1;
                int co=1;
                while(st.count(x))
                {
                    co++;
                    x++;
                }
                ans=max(ans,co);
            }
        }
        return ans;
    }
};
