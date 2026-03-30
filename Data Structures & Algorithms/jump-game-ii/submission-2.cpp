class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps=0;
        int maxval=0;
        int curr=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            maxval=max(maxval,nums[i]+i);
            if(curr==i)
            {
                jumps++;
                curr=maxval;
            }
        }
        return jumps;
    }
};
