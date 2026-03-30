class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxval=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i>maxval)
            {
                return false;
            }
            maxval=max(maxval,nums[i]+i);
        }
        return true;
    }
};
