class Solution {
public:
string ans;
bool ispalin(int low,int high)
{
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
    bool validPalindrome(string s) {
        int low=0;
        int high=s.size()-1;
        ans=s;
        while(low<high)
        {
            if(s[low]!=s[high])
            {
                return(ispalin(low+1,high) || ispalin(low,high-1));
            }
            low++;
            high--;
        }
        return true;
    }
};