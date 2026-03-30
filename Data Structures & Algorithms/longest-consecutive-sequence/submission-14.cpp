class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int curr=0;
        unordered_set<int>st(nums.begin(),nums.end());
        for(int i:nums)
        {
            if(!st.count(i-1))
            {
                int x=i+1;
                int streak=1;
                while(st.count(x))
                {
                    streak++;
                    x+=1;
                }
                curr=max(curr,streak);
            }
        }
        return curr;
    }
};
