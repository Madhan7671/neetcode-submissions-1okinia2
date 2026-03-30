class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int ans=0;
        for(int i:nums)
        {
            if(!st.count(i-1))
            {
                int count=1;
                int x=i+1;
                while(st.count(x))
                {
                    count++;
                    x++;
                }
                ans=max(ans,count);
            }
        }
        return ans;
    }
};
