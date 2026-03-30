class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>s1,t1;
        for(char ch:s)
        {
            s1[ch]++;
        }
        for(char ch:t)
        {
            t1[ch]++;
        }
        return(s1==t1);
    }
};
