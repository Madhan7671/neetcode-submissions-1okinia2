class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>a=nums1;
        vector<int>b=nums2;
        if(a.size() > b.size())
        {
            swap(a,b);
        }
        int low=0;
        int high=a.size();
        while(low<=high)
        {
            int i1=(high+low)/2;
            int i2=((a.size()+b.size()+1)/2)-i1;
            int aleft=i1>0?a[i1-1]:INT_MIN;
            int aright=i1<a.size()?a[i1]:INT_MAX;
            int bleft=i2>0?b[i2-1]:INT_MIN;
            int bright=i2<b.size()?b[i2]:INT_MAX;
            if(aleft<=bright && bleft<=aright)
            {
                if((a.size()+b.size())%2!=0)
                {
                    return(max(aleft,bleft));
                }
                return((max(aleft,bleft)+min(aright,bright))/2.0);
            }
            else if(aleft>bright)
            {
                high=i1-1;
            }
            else{
                low=i1+1;
            }
        }
        return -1;
    }
};
