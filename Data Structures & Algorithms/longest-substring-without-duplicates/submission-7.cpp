class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        unordered_map<char,int>mp;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(mp.count(ch) && mp[ch]>=left)
            {
                left=mp[ch]+1;
            }
            mp[ch]=i;
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};
