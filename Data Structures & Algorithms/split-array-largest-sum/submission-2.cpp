class Solution {
public:
bool canplace(vector<int>& nums,long long mid,int k)
{
    int parts=1;
    long long curr=0;
    for(int i:nums)
    {
        if(curr+i>mid)
        {
            parts++;
            curr=i;
            if(parts>k)
            {
                return false;
            }
        }
        else{
            curr+=i;
        }
    }
    return true;
}
    int splitArray(vector<int>& nums, int k) {
        long long left=*max_element(nums.begin(),nums.end());
        long long right=accumulate(nums.begin(),nums.end(),0LL);
        while(left<right)
        {
            long long mid=(right+left)/2;
            if(canplace(nums,mid,k))
            {
                right=mid;
            }
            else{
                left=mid+1;
            }
        }
        return left;
    }
};