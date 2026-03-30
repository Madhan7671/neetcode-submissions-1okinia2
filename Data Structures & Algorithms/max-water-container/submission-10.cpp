class Solution {
public:
    int maxArea(vector<int>& heights) {
        int low=0;
        int high=heights.size()-1;
        int ans=0;
        while(low<=high)
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
