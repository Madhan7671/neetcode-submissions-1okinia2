class Solution {
public:
    bool isPalindrome(string s) {
        string st;
        for(char ch:s)
        {
            if(isalnum(ch))
            {
                st+=tolower(ch);
            }
        }
        int left=0;
        int right=st.length()-1;
        while(left<right)
        {
            if(st[left]!=st[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
