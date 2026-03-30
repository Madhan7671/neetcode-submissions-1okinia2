class Solution {
public:
    int mySqrt(int x) {
        int ans=-1;
        int l=0;
        int r=x;
        while(l<=r)
        {
            long long mid=(l+r)/2;
            long long sq=mid*mid;
            if(sq==x)
            {
                return mid;
            }
            else if(sq>x)
            {
                r=mid-1;
            }
            else{
                ans=mid;
                l=mid+1;
            }
        }
        return ans;
    }
};