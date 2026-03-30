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
        int low=0;
        int high=a.size()-1;
        while(low<high)
        {
            if(a[low]!=a[high])
            {
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
};
