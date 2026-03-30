class Solution {
public:
    bool isPalindrome(string s) {
        int low=0;
        string s1="";
        for(char ch:s)
        {
            if(isalnum(ch))
            {
                s1+=tolower(ch);
            }
        }
        int high=s1.size()-1;
        while(low<=high)
        {
            if(s1[low]!=s1[high])
            {
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
};
