#include<string.h>
class Solution {
public:
int dp[101][101];
string s1,s2,s3;
bool fn(int i,int j)
{
    int k=i+j;
    if(k==s3.size())
    {
        return(i==s1.size() && j==s2.size());
    }
    if(dp[i][j]!=-1)
    {
        return(dp[i][j]);
    }
    bool flag=false;
    if(i<s1.size() && s1[i]==s3[k])
    {
        flag=fn(i+1,j);
    }
    if(!flag && j<s2.size() && s2[j]==s3[k])
    {
        flag=fn(i,j+1);
    }
    dp[i][j]=(flag?1:0);
    return flag;
}
    bool isInterleave(string str1, string str2, string str3) {
        memset(dp,-1,sizeof(dp));
        s1=str1;
        s2=str2;
        s3=str3;
        return(fn(0,0));
    }
};
