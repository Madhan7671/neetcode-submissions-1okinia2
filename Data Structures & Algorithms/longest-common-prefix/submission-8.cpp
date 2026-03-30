class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string prefix;
        string left=strs[0];
        string right=strs[strs.size()-1];
        for(int i=0;i<min(left.size(),right.size());i++)
        {
            if(left[i]==right[i])
            {
                prefix+=left[i];
            }
            else{
                break;
            }
        }
        return prefix;
    }
};