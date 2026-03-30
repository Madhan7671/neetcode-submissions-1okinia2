class Solution {
public:
bool ispalin(int left,int right,string& s)
{
    while(left<right)
    {
        if(s[left]!=s[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
    bool validPalindrome(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<right)
        {
            if(s[left]!=s[right])
            {
                return(ispalin(left+1,right,s) || ispalin(left,right-1,s));
            }
            left++;
            right--;
        }
        return true;
    }
};