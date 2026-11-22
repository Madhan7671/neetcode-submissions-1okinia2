class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        bool flag=true;
        string ans;
        while(i<word1.size() && j<word2.size())
        {
            if(flag)
            {
                ans+=word1[i++];
            }
            else{
                ans+=word2[j++];
            }
            flag=!flag;
        }
        while(i<word1.size()){
            ans+=word1[i++];
        }
        while(j<word2.size())
        {
            ans+=word2[j++];
        }
        return ans;
    }
};