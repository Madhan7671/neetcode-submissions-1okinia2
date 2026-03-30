class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans=0;
        while(low<=high)
        {
            int k=(low+high)/2;
            int total=0;
            for(int i:piles)
            {
                total+=(i/k)+(i%k!=0);
            }
            if(total<=h)
            {
                ans=k;
                high=k-1;
            }
            else{
                low=k+1;
            }
        }
        return ans;
    }
};
