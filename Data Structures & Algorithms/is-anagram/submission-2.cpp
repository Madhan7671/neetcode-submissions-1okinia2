class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>a;
        unordered_map<char,int>b;
        for(char ch:s)
        {
            a[ch]++;
        }
        for(char i:t)
        {
            b[i]++;
        }
        return(a==b);
    }
};
