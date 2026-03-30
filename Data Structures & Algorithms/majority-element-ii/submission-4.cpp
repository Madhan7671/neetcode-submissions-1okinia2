class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0;
        int count2=0;
        int cand1=INT_MAX;
        int cand2=INT_MAX;
        for(int i:nums)
        {
            if(i==cand1)
            {
                count1++;
            }
            else if(cand2==i)
            {
                count2++;
            }
            else if(count1==0)
            {
                cand1=i;
                count1=1;
            }
            else if(count2==0)
            {
                cand2=i;
                count2=1;
            }
            else{
                count1--;
                count2--;
            }
        }
        count1=0;
        count2=0;
        for(int i:nums)
        {
            if(i==cand1)
            {
                count1++;
            }
            if(i==cand2)
            {
                count2++;
            }
        }
        vector<int>res;
        if(count1>(nums.size())/3)
        {
            res.push_back(cand1);
        }
        if(count2>(nums.size())/3)
        {
            res.push_back(cand2);
        }
        return res;
    }
};