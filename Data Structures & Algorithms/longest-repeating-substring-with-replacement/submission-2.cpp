class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int l=0;
        int maxcount=0;
        int res=0;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
            maxcount=max(maxcount,mp[s[i]]);
            while((i-l+1)-maxcount > k)
            {
                mp[s[l]]--;
                l++;
            }
            res=max(res,i-l+1);
        }
        return res;
    }
};
