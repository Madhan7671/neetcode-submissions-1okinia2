class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,cand=0;
        for(int i:nums)
        {
            if(count==0)
            {
                cand=i;
            }
            count+=(cand==i)?1:-1;
        }
        return cand;
    }
};