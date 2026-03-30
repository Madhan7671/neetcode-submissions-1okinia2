class Solution {
public:
vector<int>dp;
string st;
int fn(int i)
{
    if(i>=st.size())
    {
        return 1;
    }
    else if(st[i]=='0')
    {
        return 0;
    }
    else if(i==st.size()-1)
    {
        return 1;
    }
    else if(dp[i]!=-1)
    {
        return dp[i];
    }
    else if(st[i]=='1' || (st[i]=='2' && st[i+1]>='0' && st[i+1]<='6'))
    {
        dp[i]=fn(i+1)+fn(i+2);
    }
    else{
        dp[i]=fn(i+1);
    }
    return(dp[i]);
}
    int numDecodings(string s) {
        st=s;
        int n=s.size();
        dp.assign(n+1,-1);
        return(fn(0));
    }
};
