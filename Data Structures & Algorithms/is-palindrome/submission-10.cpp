class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        for(char ch:s)
        {
            if(isalnum(ch))
            {
                a+=tolower(ch);
            }
        }
        int left=0;
        int right=a.length()-1;
        while(left<right)
        {
            if(a[left]!=a[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
