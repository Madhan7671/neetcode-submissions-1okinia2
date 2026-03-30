class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string pre="";
        string left=strs[0];
        string right=strs.back();
        int i=0;
        while(i<left.size() && i<right.size())
        {
            if(left[i]==right[i])
            {
                pre+=left[i];
                i++;
            }
            else{
                break;
            }
        }
        return pre;
    }
};