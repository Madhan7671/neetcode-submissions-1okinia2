class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;
        int ans=0;
        int right=*max_element(piles.begin(),piles.end());
        while(left<=right)
        {
            int mid=(left+right)/2;
            long long sum=0;
            for(int i:piles)
            {
                sum+=(i/mid)+(i%mid!=0);
            }
            if(sum<=h)
            {
                right=mid-1;
                ans=mid;
            }
            else{
                left=mid+1;
            }
        }
        return ans;
    }
};
