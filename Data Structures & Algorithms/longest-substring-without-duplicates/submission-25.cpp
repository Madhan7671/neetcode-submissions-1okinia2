class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        int left=0;
        unordered_map<char,int>mp;
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
