class Solution {
public:
vector<int>dp;
string ans;
int fn(int i)
{
    if(i>=ans.size())
    {
        return 1;
    }
    if(ans[i]=='0')
    {
        return 0;
    }
    if(i==ans.size()-1)
    {
        return 1;
    }
    if(dp[i]!=-1)
    {
        return(dp[i]);
    }
    if(ans[i]=='1' || (ans[i]=='2' && ans[i+1]>='0' && ans[i+1]<='6'))
    {
        dp[i]=fn(i+1)+fn(i+2);
    }
    else{
        dp[i]=fn(i+1);
    }
    return(dp[i]);
}
    int numDecodings(string s) {
        int n=s.size();
        ans=s;
        dp.assign(n,-1);
        return(fn(0));
    }
};
