class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0;
        int minval=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            res=max(res,prices[i]-minval);
            minval=min(minval,prices[i]);
        }
        return res;
    }
};
