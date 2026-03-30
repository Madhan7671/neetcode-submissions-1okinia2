class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for(char ch:s)
        {
            if(isalnum(ch))
            {
                ans+=tolower(ch);
            }
        }
        int low=0;
        int high=ans.size()-1;
        while(low<high)
        {
            if(ans[low]==ans[high])
            {
                low++;
                high--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
