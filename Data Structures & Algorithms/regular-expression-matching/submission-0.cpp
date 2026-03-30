#include<string.h>
class Solution {
public:
int dp[21][21];
string s1,p1;
bool fn(int i,int j)
{
    if(j==p1.size())
    {
        return(i==s1.size());
    }
    if(dp[i][j]!=-1)
    {
        return(dp[i][j]);
    }
    bool firstmatch=(i<s1.size() && (s1[i]==p1[j] || p1[j]=='.'));
    bool ans;
    if(j+1 < p1.size() && p1[j+1]=='*')
    {
        ans=fn(i,j+2) || (firstmatch && fn(i+1,j));
    }
    else{
        ans=fn(i+1,j+1)&&firstmatch;
    }
    return(dp[i][j]=ans);
}
    bool isMatch(string s, string p) {
        memset(dp,-1,sizeof(dp));
        s1=s;
        p1=p;
        return(fn(0,0));
    }
};
