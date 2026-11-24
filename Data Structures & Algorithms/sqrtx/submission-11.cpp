class Solution {
public:
    int mySqrt(int x) {
        int left=0;
        int right=x;
        int ans=0;
        while(left<=right)
        {
            long long mid=(left+right)/2;
            long long sqrt=mid*mid;
            if(sqrt==x)
            {
                return mid;
            }
            else if(sqrt<x)
            {
                left=mid+1;
                ans=mid;
            }
            else{
                right=mid-1;
            }
        }
        return ans;
    }
};