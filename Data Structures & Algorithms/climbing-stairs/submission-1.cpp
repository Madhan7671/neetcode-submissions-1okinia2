class Solution {
public:
int fn(int i)
{
    if(i<=1)
    {
        return 1;
    }
    return(fn(i-1)+fn(i-2));
}
    int climbStairs(int n) {
        return(fn(n));
    }
};
