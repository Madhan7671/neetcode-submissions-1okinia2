#include<cstring>
class Solution {
public:
int dp[1001][1001];
string s1,s2;
int fn(int i,int j)
{
    if(i>=s1.size() || j>=s2.size())
    {
        return 0;
    }
    if(dp[i][j]!=-1)
    {
        return(dp[i][j]);
    }
    if(s1[i]==s2[j])
    {
        dp[i][j]=1+fn(i+1,j+1);
    }
    else{
        dp[i][j]=max(fn(i+1,j),fn(i,j+1));
    }
    return(dp[i][j]);
}
    int longestCommonSubsequence(string text1, string text2) {
        s1=text1;
        s2=text2;
        memset(dp,-1,sizeof(dp));
        return(fn(0,0));
    }
};
