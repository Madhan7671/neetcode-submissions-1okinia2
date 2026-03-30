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
    int findInMountainArray(int target, MountainArray &mount) {
        int low=1;
        int high=mount.length()-1;
        while(low<high)
        {
            int mid=(low+high)/2;
            if(mount.get(mid)<mount.get(mid+1))
            {
                low=mid+1;
            }
            else{
                high=mid;
            }
        }
        int peek=low;
        low=0;
        high=peek-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(mount.get(mid)==target)
            {
                return mid;
            }
            else if(mount.get(mid)<target)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        low=peek;
        high=mount.length()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(mount.get(mid)==target)
            {
                return mid;
            }
            else if(mount.get(mid)>target)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
    }
};