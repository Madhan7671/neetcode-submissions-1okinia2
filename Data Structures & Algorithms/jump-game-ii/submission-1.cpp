class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps=0;
        int curr=0;
        int far=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            far=max(far,nums[i]+i);
            if(curr==i)
            {
                jumps++;
                curr=far;
            }
        }
        return jumps;
    }
};
