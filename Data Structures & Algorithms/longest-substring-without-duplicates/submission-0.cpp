class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int count=0;
        int left=0;
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            if(mp.count(ch) && mp[ch]>=left)
            {
                left=mp[ch]+1;
            }
            mp[ch]=i;
            count=max(count,i-left+1);
        }
        return count;
    }
};
