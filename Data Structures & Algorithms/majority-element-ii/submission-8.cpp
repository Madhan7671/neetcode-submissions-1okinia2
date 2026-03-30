class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cand1=INT_MAX;
        int cand2=INT_MAX;
        int curr1=0;
        int curr2=0;
        for(int i:nums)
        {
            if(cand1==i)
            {
                curr1++;
            }
            else if(cand2==i)
            {
                curr2++;
            }
            else if(curr1==0)
            {
                cand1=i;
                curr1=1;
            }
            else if(curr2==0)
            {
                cand2=i;
                curr2=1;
            }
            else{
                curr1--;
                curr2--;
            }
        }
        curr1=0;
        curr2=0;
        for(int i:nums)
        {
            if(cand1==i)
            {
                curr1++;
            }
            if(cand2==i)
            {
                curr2++;
            }
        }
        vector<int>ans;
        if(curr1>(nums.size())/3)
        {
            ans.push_back(cand1);
        }
        if(curr2>(nums.size())/3)
        {
            ans.push_back(cand2);
        }
        return ans;
    }
};