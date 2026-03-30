class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int ans=0;
        for(int i:nums)
        {
            if(!st.count(i-1))
            {
                int currentnum=i;
                int countstreak=1;
                while(st.count(currentnum+1))
                {
                    countstreak++;
                    currentnum=currentnum+1;
                }
                ans=max(ans,countstreak);
            }
        }
        return ans;
    }
};
