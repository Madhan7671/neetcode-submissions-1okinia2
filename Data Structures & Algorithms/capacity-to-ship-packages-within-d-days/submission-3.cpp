class Solution {
public:
bool canplace(vector<int>& weights,int days,int capacity)
{
    int load=0;
    int useddays=1;
    for(int i:weights)
    {
        if(load+i>capacity)
        {
            useddays++;
            load=0;
        }
        load+=i;
    }
    return(useddays <= days);
}
    int shipWithinDays(vector<int>& weights, int days) {
        int left=*max_element(weights.begin(),weights.end());
        int right=accumulate(weights.begin(),weights.end(),0);
        int ans=0;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(canplace(weights,days,mid)){
                ans=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return ans;
    }
};