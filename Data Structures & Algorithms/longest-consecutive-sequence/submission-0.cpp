class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int longest=0;
        for(int i:nums)
        {
            if(!s.count(i-1))
            {
                int currentnum=i;
                int currentstreak=1;
                while(s.count(currentnum+1))
                {
                    currentnum=currentnum+1;
                    currentstreak++;
                }
                longest=max(longest,currentstreak);
            }
        }
        return longest;
    }
};
