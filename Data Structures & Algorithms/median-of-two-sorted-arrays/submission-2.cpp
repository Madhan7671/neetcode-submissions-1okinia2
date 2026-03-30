class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>a=nums1;
        vector<int>b=nums2;
        if(a.size()>b.size())
        {
            swap(a,b);
        }
        int low=0;
        int high=a.size();
        int total=a.size()+b.size();
        while(low<=high)
        {
            int i=(low+high)/2;
            int j=((a.size()+b.size()+1)/2)-i;
            int aleft=i>0?a[i-1]:INT_MIN;
            int aright=i<a.size()?a[i]:INT_MAX;
            int bleft=j>0?b[j-1]:INT_MIN;
            int bright=j<b.size()?b[j]:INT_MAX;
            if(aleft<=bright && aright>=bleft)
            {
                if(total%2==0)
                {
                    return((max(aleft,bleft)+min(aright,bright))/2.0);
                }
                return(max(aleft,bleft));
            }
            else if(aleft>bright)
            {
                high=i-1;
            }
            else{
                low=i+1;
            }
        }
        return -1;
    }
};
