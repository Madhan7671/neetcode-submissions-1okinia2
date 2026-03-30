class Solution {
public:
bool canplace(vector<int>& nums,int k,long long mid)
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
            long long mid=(left+right)/2;
            if(canplace(nums,k,mid))
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