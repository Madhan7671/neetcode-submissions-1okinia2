class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxe=prices[0];
        int res=0;
        for(int i=1;i<prices.size();i++)
        {
            res=max(res,prices[i]-maxe);
            maxe=min(maxe,prices[i]);
        }
        return res;
    }
};
