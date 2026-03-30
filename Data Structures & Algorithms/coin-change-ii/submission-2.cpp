#include<string.h>
class Solution {
public:
int dp[5001][5001];
vector<int>coin;
int fn(int amount,int i)
{
    if(amount==0)
    {
        return 1;
    }
    if(i>=coin.size())
    {
        return 0;
    }
    if(dp[amount][i]!=-1)
    {
        return(dp[amount][i]);
    }
    int hold=0;
    if(amount-coin[i]>=0)
    {
        hold=fn(amount-coin[i],i);
    }
    int skip=0;
    skip=fn(amount,i+1);
    return(dp[amount][i]=hold+skip);
}
    int change(int amount, vector<int>& coins) {
        memset(dp,-1,sizeof(dp));
        coin=coins;
        return(fn(amount,0));
    }
};
