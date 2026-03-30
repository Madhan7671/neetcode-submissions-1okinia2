class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx=0;
        int mini=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            mx=max(mx,prices[i]-mini);
            mini=min(mini,prices[i]);
        }
        return mx;
    }
};
