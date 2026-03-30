class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int res=high;
        while(low<=high)
        {
            int k=(low+high)/2;
            int totaltime=0;
            for(int p:piles)
            {
                totaltime+=p/k+(p%k!=0);
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
