class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for(char i:s)
        {
            if(isalnum(i))
            {
                ans+=tolower(i);
            }
        }
        int left=0,right=ans.size()-1;
        while(left<=right)
        {
            if(ans[left]!=ans[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
