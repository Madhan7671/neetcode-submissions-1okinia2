/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n=mountainArr.length();
        int l=1;
        int r=n-1;
        while(l<r)
        {
            int mid=(l+r)/2;
            if(mountainArr.get(mid)<mountainArr.get(mid+1))
            {
                l=mid+1;
            }
            else{
                r=mid;
            }
        }
        int peak=l;
        l=0;
        r=peak-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            int val=mountainArr.get(mid);
            if(val < target)
            {
                l=mid+1;
            }
            else if(val > target)
            {
                r=mid-1;
            }
            else{
                return mid;
            }
        }
        l=peak;
        r=n-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            int val=mountainArr.get(mid);
            if(val>target)
            {
                l=mid+1;
            }
            else if(val<target)
            {
                r=mid-1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
};