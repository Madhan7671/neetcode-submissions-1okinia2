class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int curr=0;
        for(int i:nums)
        {
            if(!st.count(i-1))
            {
                int streak=1;
                int x=i+1;
                while(st.count(x))
                {
                    streak++;
                    x++;
                }
                curr=max(curr,streak);
            }
        }
        return curr;
    }
};
