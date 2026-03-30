class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int res=high;
        while(low<=high)
        {
            int k=(low+high)/2;
            long long totaltime=0;
            for(int p:piles)
            {
                totaltime+=ceil(static_cast<double>(p)/k);
            }
            if(totaltime<=h)
            {
                res=k;
                high=k-1;
            }
            else{
                low=k+1;
            }
        }
        return res;
    }
};
