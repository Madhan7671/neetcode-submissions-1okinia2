class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cand1=INT_MAX;
        int cand2=INT_MAX;
        int count1=0;
        int count2=0;
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
            if(cand1==i)
            {
                count1++;
            }
            if(cand2==i)
            {
                count2++;
            }
        }
        vector<int>ans;
        if(count1>(nums.size())/3)
        {
            ans.push_back(cand1);
        }
        if(count2>(nums.size())/3)
        {
            ans.push_back(cand2);
        }
        return ans;
    }
};