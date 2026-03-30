class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        set<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    for(int l=k+1;l<n;l++)
                    {
                        long long res=(long long)nums[i]+nums[j]+nums[k]+nums[l];
                        if(res==target)
                        {
                            ans.insert({nums[i],nums[j],nums[k],nums[l]});
                        }
                    }
                }
            }
        }
        return(vector<vector<int>>(ans.begin(),ans.end()));
    }
};