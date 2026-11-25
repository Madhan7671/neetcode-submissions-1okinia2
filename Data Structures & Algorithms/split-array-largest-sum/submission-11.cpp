class Solution {
public:
bool canplace(vector<int>& nums,int capacity,int k)
{
    int used=1;
    int load=0;
    for(int i=0;i<nums.size();i++)
    {
        if(load+nums[i]>capacity)
        {
            used++;
            load=0;
        }
        load+=nums[i];
    }
    return(used<=k);
}
    int splitArray(vector<int>& nums, int k) {
        int left=*max_element(nums.begin(),nums.end());
        int right=accumulate(nums.begin(),nums.end(),0);
        int ans=0;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(canplace(nums,mid,k))
            {
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