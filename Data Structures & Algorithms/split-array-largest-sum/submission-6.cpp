class Solution {
public:
bool canplace(vector<int>nums,int k,int cap)
{
    long long load=0;
    int parts=1;
    for(int i:nums)
    {
        if(load+i>cap)
        {
            parts++;
            load=0;
        }
        load+=i;
    }
    return(parts<=k);
}
    int splitArray(vector<int>& nums, int k) {
        long long low=*max_element(nums.begin(),nums.end());
        long long high=accumulate(nums.begin(),nums.end(),0);
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            long long mid=(low+high)/2;
            if(canplace(nums,k,mid))
            {
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};