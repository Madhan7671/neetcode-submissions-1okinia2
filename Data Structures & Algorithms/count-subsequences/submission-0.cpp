#include<string.h>
class Solution {
public:
int dp[1001][1001];
string s1,s2;
int fn(int i,int j)
{
    if(dp[i][j]!=-1)
    {
        return(dp[i][j]);
    }
    if(j==s2.size())
    {
        return 1;
    }
    if(i==s1.size())
    {
        return 0;
    }
    int hold=0;
    int skip=0;
    if(s1[i]==s2[j])
    {
        hold=fn(i+1,j+1);
    }
    skip=fn(i+1,j);
    return(dp[i][j]=hold+skip);
}
    int numDistinct(string s, string t) {
        memset(dp,-1,sizeof(dp));
        s1=s;
        s2=t;
        return(fn(0,0));
    }
};
