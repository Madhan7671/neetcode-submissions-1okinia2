class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int res=0;
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(mp.count(ch) && mp[ch]>=left)
            {
                left=mp[ch]+1;
            }
            mp[ch]=i;
            res=max(res,i-left+1);
        }
        return res;
    }
};
