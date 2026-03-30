class Solution {
public:
    int maxArea(vector<int>& heights) {
        int low=0;
        int ans=0;
        int high=heights.size()-1;
        while(low<high)
        {
            if(heights[low]<heights[high])
            {
                ans=max(ans,heights[low]*(high-low));
                low++;
            }
            else{
                ans=max(ans,heights[high]*(high-low));
                high--;
            }
        }
        return ans;
    }
};
