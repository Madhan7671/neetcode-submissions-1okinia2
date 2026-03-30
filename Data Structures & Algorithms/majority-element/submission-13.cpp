class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int ans=0;
        for(int i:nums)
        {
            if(count==0)
            {
                ans=i;
            }
            count+=(ans==i)?1:-1;
        }
        return ans;
    }
};