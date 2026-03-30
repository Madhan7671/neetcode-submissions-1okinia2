#include<bits/stdc++.h>
class Solution {
public:
int dp[101];
string str;
int fn(int i)
{
    if(str[i]=='0')
    {
        return 0;
    }
    if(i>=str.size())
    {
        return 1;
    }
    if(i==str.size()-1)
    {
        return 1;
    }
    
    if(dp[i]!=-1)
    {
        return(dp[i]);
    }
    if(str[i]=='1' || (str[i]=='2' &&(str[i+1]>='0' && str[i+1]<='6')))
    {
        dp[i]=fn(i+1)+fn(i+2);
    }
    else{
        dp[i]=fn(i+1);
    }
    return(dp[i]);
}
    int numDecodings(string s) {
        memset(dp,-1,sizeof(dp));
        str=s;
        return(fn(0));
    }
};
