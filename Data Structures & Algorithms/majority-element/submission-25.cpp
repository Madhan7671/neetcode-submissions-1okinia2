class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cand=0,res=0;
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