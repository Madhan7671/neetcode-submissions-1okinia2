class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for(char i:s)
        {
            if(isalnum(i))
            {
                ans+=tolower(i);
            }
        }
        int low=0;
        int high=ans.size()-1;
        while(low<high)
        {
            if(ans[low]!=ans[high])
            {
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
};
