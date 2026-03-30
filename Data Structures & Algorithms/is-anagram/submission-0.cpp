class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        unordered_map<char,int>mp2;
        for(char i:s)
        {
            mp[i]++;
        }
        for(char j:t)
        {
            mp2[j]++;
        }
        for(char i:s)
        {
            if(mp[i]!=mp2[i])
            {
                return false;
            }
        }
        for(char i:t)
        {
            if(mp[i]!=mp2[i])
            {
                return false;
            }
        }
        return true;
    }
};
