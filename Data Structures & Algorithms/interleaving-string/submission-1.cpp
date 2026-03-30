#include<bits/stdc++.h>
class Solution {
public:
int dp[101][101];
string a,b,c;
bool fn(int i,int j)
{
    int k=i+j;
    if(k==c.size())
    {
        return(i==a.size() && j==b.size());
    }
    if(dp[i][j]!=-1)
    {
        return(dp[i][j]);
    }
    bool flag=false;
    if(i<a.size() && a[i]==c[k])
    {
        flag=fn(i+1,j);
    }
    if(!flag && j<b.size() && b[j]==c[k])
    {
        flag=fn(i,j+1);
    }
    dp[i][j]=flag?1:0;
    return flag;
}
    bool isInterleave(string s1, string s2, string s3) {
        a=s1;
        b=s2;
        c=s3;
        memset(dp,-1,sizeof(dp));
        return(fn(0,0));
    }
};
