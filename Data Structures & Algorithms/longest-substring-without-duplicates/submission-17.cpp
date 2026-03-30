class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int left=0;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(mp.count(s[i]) && left<=mp[s[i]])
            {
                left=mp[s[i]]+1;
            }
            mp[s[i]]=i;
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};
