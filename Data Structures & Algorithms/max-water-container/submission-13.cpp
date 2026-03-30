class Solution {
public:
    int maxArea(vector<int>& heights) {
        int low=0;
        int n=heights.size();
        int ans=0;
        int high=n-1;
        while(low<high)
        {
            if(heights[low]<heights[high])
            {
                ans=max(ans,(high-low)*heights[low]);
                low++;
            }
            else{
                ans=max(ans,(high-low)*heights[high]);
                high--;
            }
        }
        return ans;
    }
};
