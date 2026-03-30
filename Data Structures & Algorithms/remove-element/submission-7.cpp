class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>ans;
        for(int i:nums)
        {
            if(i!=val)
            {
                ans.push_back(i);
            }
        }
        nums.clear();
        nums.insert(nums.end(),ans.begin(),ans.end());
        return nums.size();
    }
};