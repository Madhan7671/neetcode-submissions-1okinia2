class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int index=0;
        int ans=0;
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int i=n-1;i>=0;i--)
        {
            for(int j=i;j<n;j++)
            {
                if(s[i]==s[j] &&(j-i<=2 || dp[i+1][j-1]))
                {
                    dp[i][j]=true;
                    if(ans<j-i+1)
                    {
                        ans=j-i+1;
                        index=i;
                    }
                }
            }
        }
        return s.substr(index,ans);
    }
};
