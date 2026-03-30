class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string left=strs[0];
        string ans;
        string right=strs[strs.size()-1];
        for(int i=0;i<left.size() && i<right.size();i++)
        {
            if(left[i]==right[i])
            {
                ans+=left[i];
            }
            else{
                break;
            }
        }
        return ans;
    }
};