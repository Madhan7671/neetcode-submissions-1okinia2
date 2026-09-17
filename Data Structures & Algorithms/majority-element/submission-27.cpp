class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res=0;
        int cand1=0;
        for(int i:nums)
        {
            if(res==0)
            {
                cand1=i;
            }
            res+=(cand1==i)?1:-1;
        }
        return cand1;
    }
};