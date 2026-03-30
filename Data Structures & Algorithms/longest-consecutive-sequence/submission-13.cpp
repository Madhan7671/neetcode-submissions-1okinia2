class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count=0;
        unordered_set<int>st(nums.begin(),nums.end());
        for(int i:nums)
        {
            int streak=1;
            int x=i+1;
            while(st.count(x))
            {
                streak++;
                x+=1;
            }
            count=max(count,streak);
        }
        return count;
    }
};
