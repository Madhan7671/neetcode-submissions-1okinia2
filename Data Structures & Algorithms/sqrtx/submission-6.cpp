class Solution {
public:
    int mySqrt(int x) {
        int left=0;
        int right=x;
        int ans=-1;
        while(left<=right)
        {
            long long mid=(left+right)/2;
            long long sqrt=mid*mid;
            if(sqrt==x)
            {
                return mid;
            }
            else if(sqrt>x)
            {
                right=mid-1;
            }
            else{
                left=mid+1;
                ans=mid;
            }
        }
        return ans;
    }
};