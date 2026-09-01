class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first=strs[0];
        string second=strs[strs.size()-1];
        int i=0,j=0;
        string ans;
        while(i<first.size() && j<second.size())
        {
            if(first[i]==second[j])
            {
                ans+=first[i];
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