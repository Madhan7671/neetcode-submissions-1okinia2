class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0,ans=0,maxe=0;
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            maxe=max(maxe,mp[s[i]]);
            if(i-left+1-maxe > k)
            {
                mp[s[left]]--;
                left++;
            }
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};
