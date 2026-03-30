class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for(char ch:s)
        {
            if(isalnum(ch))
            {
                ans+=tolower(ch);
            }
        }
        int l=0;
        int r=ans.size()-1;
        while(l<=r)
        {
            if(ans[l]!=ans[r])
            {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
