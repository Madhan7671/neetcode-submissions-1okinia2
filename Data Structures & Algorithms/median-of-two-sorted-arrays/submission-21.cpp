class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        if(a.size()>b.size())
        {
          swap(a,b);
        }
        int left=0;
        int right=a.size();
        while(left<=right)
        {
            int m1=(left+right)/2;
            int m2=((a.size()+b.size()+1)/2.0)-m1;
            int aleft=m1>0?a[m1-1]:INT_MIN;
            int aright=m1<a.size()?a[m1]:INT_MAX;
            int bleft=m2>0?b[m2-1]:INT_MIN;
            int bright=m2<b.size()?b[m2]:INT_MAX;
            if(aleft<=bright && bleft<=aright)
            {
                if((a.size()+b.size())%2==0)
                {
                    return(max(aleft,bleft)+min(aright,bright))/2.0;
                }
                else{
                    return(max(aleft,bleft));
                }
            }
            else if(aleft>bright)
            {
                right=m1-1;
            }
            else{
                left=m1+1;
            }
        }
        return -1;
    }
};
