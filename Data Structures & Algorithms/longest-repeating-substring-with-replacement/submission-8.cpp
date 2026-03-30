class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int n=s.size();
        int maxv=0;
        int ans=0;
        int left=0;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
            maxv=max(maxv,mp[s[i]]);
            if((i-left+1)-maxv>k)
            {
                mp[s[left]]--;
                left++;
            }
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};
