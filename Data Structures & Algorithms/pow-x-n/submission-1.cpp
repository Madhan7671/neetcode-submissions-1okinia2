class Solution {
public:
double fn(double x, int n)
{
    double ans=1.0;
    for(int i=1;i<=n;i++)
    {
        ans*=x;
    }
    return ans;
}
    double myPow(double x, int n) {
        double ans=0.0;
        if(n>=0)
        {
            return(fn(x,n));
        }
        return(1.0/fn(x,-n));
    }
};
