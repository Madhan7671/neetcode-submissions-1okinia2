class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>s1,s2;
        for(char ch:s)
        {
            s1[ch]++;
        }
        for(char ch:t)
        {
            s2[ch]++;
        }
        return(s1==s2);
    }
};
