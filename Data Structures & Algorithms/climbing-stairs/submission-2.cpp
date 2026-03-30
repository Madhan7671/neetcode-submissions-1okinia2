class Solution {
public:
int fn(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return(fn(n-1)+fn(n-2));
}
    int climbStairs(int n) {
        return(fn(n));
    }
};
