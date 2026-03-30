class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res=0;
        int curr=0;
        for(int i:nums)
        {
            if(curr==0)
            {
                res=i;
            }
            curr+=res==i?1:-1;
        }
        return res;
    }
};