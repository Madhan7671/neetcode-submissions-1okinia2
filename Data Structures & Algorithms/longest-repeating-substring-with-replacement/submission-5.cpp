class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int res=0;
        int maxv=0;
        int l=0;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
            maxv=max(maxv,mp[s[i]]);
            while((i-l+1)-maxv>k)
            {
                mp[s[l]]--;
                l++;
            }
            res=max(res,i-l+1);
        }
        return res;
    }
};
