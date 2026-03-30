class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int maxe=0;
        for(int i:st)
        {
            if(!st.count(i-1))
            {
                int streak=1;
                int x=i;
                while(st.count(x+1))
                {
                    streak++;
                    x=x+1;
                }
                maxe=max(maxe,streak);
            }
        }
        return maxe;
    }
};
