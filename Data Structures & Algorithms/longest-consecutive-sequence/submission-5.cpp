class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int ans=0;
        for(int& i: nums)
        {
            if(!st.count(i-1))
            {
                int streak=1;
                int a=i;
                while(st.count(a+1))
                {
                    streak++;
                    a=a+1;
                }
                ans=max(ans,streak);
            }
        }
        return ans;
    }
};
