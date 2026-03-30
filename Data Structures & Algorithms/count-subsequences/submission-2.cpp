#include<bits/stdc++.h>
class Solution {
public:
int dp[1001][1001];
string s1,t1;
int fn(int i,int j)
{
    if(j==t1.size())
    {
        return 1;
    }
    if(i==s1.size())
    {
        return 0;
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    int hold=0;
    if(s1[i]==t1[j])
    {
        hold=fn(i+1,j+1);
    }
    int skip=fn(i+1,j);
    return(dp[i][j]=hold+skip);
}
    int numDistinct(string s, string t) {
        memset(dp,-1,sizeof(dp));
        s1=s;
        t1=t;
        return(fn(0,0));
    }
};
