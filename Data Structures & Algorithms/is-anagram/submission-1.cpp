class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        unordered_map<char,int>mp2;
        if(s.size()!=t.size())
        {
            return false;
        }
        for(char i:s)
        {
            mp[i]++;
        }
        for(char j:t)
        {
            mp2[j]++;
        }
        return (mp==mp2);
    }
};
