class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string s1=strs[0];
        string s2=strs.back();
        string prefix="";
        for(int i=0;i<s1.size() && s2.size();i++)
        {
            if(s1[i]==s2[i])
            {
                prefix+=s1[i];
            }
            else{
                break;
            }
        }
        return prefix;
    }
};