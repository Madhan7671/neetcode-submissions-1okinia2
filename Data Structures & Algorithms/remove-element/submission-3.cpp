class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
                ans.push_back(nums[i]);
            }
        }
        nums.clear();
        nums.insert(nums.end(),ans.begin(),ans.end());
        return(nums.size());
    }
};