class Solution {
public:
    bool isPalindrome(string s) {
        string newstring="";
        for(char ch:s)
        {
            if(isalnum(ch))
            {
                newstring+=tolower(ch);
            }
        }
        int left=0;
        int right=newstring.length()-1;
        while(left<=right)
        {
            if(newstring[left]!=newstring[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
