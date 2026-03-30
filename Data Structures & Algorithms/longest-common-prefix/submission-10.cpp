class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string left=strs[0];
        string right=strs[strs.size()-1];
        int m=left.size();
        int n=right.size();
        int i=0;
        int j=0;
        while(i<m && j<n)
        {
            if(left[i]==right[j])
            {
                i++;
                j++;
            }
            else{
                break;
            }
        }
        return(left.substr(0,i));
    }
};