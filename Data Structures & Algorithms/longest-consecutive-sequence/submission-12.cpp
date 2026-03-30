class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int count=0;
        for(int i:nums)
        {
            if(!st.count(i-1))
            {
                int x=i+1;
                int streak=1;
                while(st.count(x))
                {
                    streak++;
                    x++;
                }
                count=max(count,streak);
            }
        }
        return count;
    }
};
