class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int ans=0;
        for(int i:nums)
        {
            if(!st.count(i-1))
            {
                int num=i;
                int streak=1;
                while(st.count(num+1))
                {
                    streak++;
                    num=num+1;
                }
                ans=max(ans,streak);
            }
        }
        return ans;
    }
};
