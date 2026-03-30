class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string left=strs[0];
        string right=strs[strs.size()-1];
        int n=left.size();
        int m=right.size();
        string ans="";
        for(int i=0;i<m && i<n;i++)
        {
            if(left[i]!=right[i])
            {
                break;
            }
            ans+=left[i];
        }
        return ans;
    }
};