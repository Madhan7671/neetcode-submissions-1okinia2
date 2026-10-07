class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cand1=0;
        int count1=0;
        for(int i:nums)
        {
            if(count1==0)
            {
                cand1=i;
            }
            count1+=(cand1==i)?1:-1;
        }
        return cand1;
    }
};