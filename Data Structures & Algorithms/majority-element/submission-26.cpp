class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res=0,cand=0;
        for(int i:nums)
        {
            if(res==0)
            {
                cand=i;
            }
            res+=(cand==i)?1:-1;
        }
        return cand;
    }
};