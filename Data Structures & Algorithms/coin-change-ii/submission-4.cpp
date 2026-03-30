#include<bits/stdc++.h>
class Solution {
public:
int dp[101][5001];
vector<int>coin;
int fn(int i,int amount)
{
    if(amount==0)
    {
        return 1;
    }
    if(i>=coin.size())
    {
        return 0;
    }
    if(dp[i][amount]!=-1)
    {
        return(dp[i][amount]);
    }
    int hold=0;
    if(amount-coin[i] >=0)
    {
        hold=fn(i,amount-coin[i]);
    }
    int skip=fn(i+1,amount);
    return(dp[i][amount]=hold+skip);
}
    int change(int amount, vector<int>& coins) {
        memset(dp,-1,sizeof(dp));
        coin=coins;
        return(fn(0,amount));
    }
};
