class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int curr=0;
        int ans=0;
        for(int i:nums)
        {
            if(curr==0)
            {
                ans=i;
            }
            curr+=(ans==i)?1:-1;
        }
        return ans;
    }
};