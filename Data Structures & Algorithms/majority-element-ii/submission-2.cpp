class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count1,count2,cand1,cand2;
        count1=0;
        count2=0;
        cand1=INT_MIN;
        cand2=INT_MIN;
        for(int i:nums)
        {
            if(cand1==i)
            {
                count1++;
            }
            else if(cand2==i)
            {
                count2++;
            }
            else if(count1==0)
            {
                count1=1;
                cand1=i;
            }
            else if(count2==0)
            {
                count2=1;
                cand2=i;
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
            if(cand1==i)
            {
                count1++;
            }
            else if(cand2==i)
            {
                count2++;
            }
        }
        vector<int>res;
        if(count1>n/3)
        {
            res.push_back(cand1);
        }
        if(count2>n/3)
        {
            res.push_back(cand2);
        }
        return res;
    }
};