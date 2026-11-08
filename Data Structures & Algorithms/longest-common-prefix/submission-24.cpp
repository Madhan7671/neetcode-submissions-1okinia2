class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string left=strs[0];
        string right=strs[strs.size()-1];
        int i=0,j=0;
        string ans;
        while(i<left.size() && j<right.size())
        {
            if(right[i]==left[j])
            {
                ans+=right[i];
                i++;
                j++;
            }
            else{
                break;
            }
        }
        return ans;
    }
};