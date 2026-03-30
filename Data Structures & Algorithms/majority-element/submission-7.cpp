class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int res=0;
        for(int i:nums)
        {
            if(count==0)
            {
                res=i;
            }
            count+=res==i?1:-1;
        }
        return res;
    }
};