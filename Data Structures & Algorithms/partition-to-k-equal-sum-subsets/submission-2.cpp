class Solution {
public:
bool fn(int index,vector<int>&nums,vector<int>&sides,int target,int k)
{
    if(index==nums.size())
    {
        for(int i=0;i<k;i++)
        {
            if(sides[i]!=target)
            {
                return false;
            }
        }
        return true;
    }
    for(int i=0;i<k;i++)
    {
        if(sides[i]+nums[index]>target)
        {
            continue;
        }
        sides[i]+=nums[index];
        if(fn(index+1,nums,sides,target,k))
        {
            return true;
        }
        sides[i]-=nums[index];
    }
    return false;
}
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum=0;
        for(int i:nums)
        {
            sum+=i;
        }
        sort(nums.rbegin(),nums.rend());
        if(sum%k!=0)
        {
            return false;
        }
        vector<int>sides(k,0);
        return(fn(0,nums,sides,sum/k,k));
    }
};