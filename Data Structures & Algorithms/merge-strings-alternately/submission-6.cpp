class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int i=0;
        int j=0;
        int m=word1.size();
        int n=word2.size();
        bool flag=true;
        while(i<m && j<n)
        {
            if(flag)
            {
                ans+=word1[i];
                i++;
                flag=false;
            }
            else{
                ans+=word2[j];
                j++;
                flag=true;
            }
        }
        while(i<m)
        {
            ans+=word1[i];
            i++;
        }
        while(j<n)
        {
            ans+=word2[j];
            j++;
        }
        return ans;
    }
};