class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_gas=accumulate(gas.begin(),gas.end(),0);
        int total_cost=accumulate(cost.begin(),cost.end(),0);
        if(total_gas < total_cost)
        {
            return -1;
        }
        int start=0;
        int curr=0;
        for(int i=0;i<cost.size();i++)
        {
            curr+=gas[i]-cost[i];
            if(curr<0)
            {
                start=i+1;
                curr=0;
            }
        }
        return start;
    }
};
