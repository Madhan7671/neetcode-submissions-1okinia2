class Solution {
public:
    bool isPalindrome(string s) {
        string res;
        for(char ch:s)
        {
            if(isalnum(ch))
            {
                res+=tolower(ch);
            }
        }
        int low=0;
        int high=res.length()-1;
        while(low<high)
        {
            if(res[low]==res[high])
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
