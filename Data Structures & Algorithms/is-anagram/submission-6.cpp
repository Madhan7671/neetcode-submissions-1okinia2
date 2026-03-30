class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(char i:s)
        {
            mp1[i]++;
        }
        for(char i:t)
        {
            mp2[i]++;
        }
        return(mp1==mp2);
    }
};
