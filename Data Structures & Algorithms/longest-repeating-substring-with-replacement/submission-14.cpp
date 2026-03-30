class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans=0;
        int left=0;
        unordered_map<char,int>mp;
        int maxe=0;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            maxe=max(maxe,mp[s[i]]);
            if((i-left+1)-maxe>k)
            {
                mp[s[left]]--;
                left++;
            }
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};
