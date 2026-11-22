class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans=0;
        unordered_set<int>st(nums.begin(),nums.end());
        for(auto& i:st)
        {
            if(!st.count(i-1)){
            int maxe=1;
            int x=i+1;
            while(st.count(x))
            {
                maxe++;
                x++;
            }
            ans=max(ans,maxe);
            }
        }
        return ans;
    }
};
