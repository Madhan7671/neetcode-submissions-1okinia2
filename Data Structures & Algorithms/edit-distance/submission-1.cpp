#include<string.h>
class Solution {
public:
int dp[1001][1001];
string s1,s2;
int fn(int i,int j)
{
    if(i==s1.size())
    {
        return(s2.size()-j);
    }
    if(j==s2.size())
    {
        return(s1.size()-i);
    }
    if(dp[i][j]!=-1)
    {
        return(dp[i][j]);
    }
    if(s1[i]==s2[j])
    {
        return(fn(i+1,j+1));
    }
    return(dp[i][j]=min({1+fn(i+1,j+1),1+fn(i+1,j),1+fn(i,j+1)}));
}
    int minDistance(string word1, string word2) {
        s1=word1;
        s2=word2;
        memset(dp,-1,sizeof(dp));
        return(fn(0,0));
    }
};
