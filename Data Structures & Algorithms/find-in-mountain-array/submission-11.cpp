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
        int left=1;
        int right=mount.length()-1;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(mount.get(mid)<mount.get(mid+1))
            {
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        int peek=left;
        left=0;
        right=peek-1;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(mount.get(mid)==target)
            {
                return mid;
            }
            else if(mount.get(mid)<target)
            {
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        left=peek;
        right=mount.length()-1;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(mount.get(mid)==target)
            {
                return mid;
            }
            else if(mount.get(mid)<target)
            {
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return-1;
    }
};