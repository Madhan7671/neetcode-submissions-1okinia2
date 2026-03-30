#include<bits/stdc++.h>
class Solution {
public:
string w1,w2;
int dp[101][101];
int fn(int i,int j)
{
    if(i==w1.size())
    {
        return(w2.size()-j);
    }
    if(j==w2.size())
    {
        return(w1.size()-i);
    }
    if(dp[i][j]!=-1)
    {
        return(dp[i][j]);
    }
    if(w1[i]==w2[j])
    {
        return(fn(i+1,j+1));
    }
    return(dp[i][j]=min({1+fn(i+1,j+1),1+fn(i+1,j),1+fn(i,j+1)}));
}
    int minDistance(string word1, string word2) {
        memset(dp,-1,sizeof(dp));
        w1=word1;
        w2=word2;
        return(fn(0,0));
    }
};
