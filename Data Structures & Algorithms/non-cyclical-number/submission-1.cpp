class Solution {
public:
int fn(int n)
{
    int sum=0;
    while(n>0)
    {
        int digit=n%10;
        sum+=digit*digit;
        n/=10;
    }
    return(sum);
}
    bool isHappy(int n) {
        unordered_set<int>st;
        while(n!=1 && !st.count(n))
        {
            st.insert(n);
            n=fn(n);
        }
        return(n==1);
    }
};
