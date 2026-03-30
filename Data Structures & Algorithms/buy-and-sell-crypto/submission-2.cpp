class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int minval=arr[0];
        int res=0;
        for(int i=1;i<arr.size();i++)
        {
            res=max(res,arr[i]-minval);
            minval=min(minval,arr[i]);
        }
        return res;
    }
};
