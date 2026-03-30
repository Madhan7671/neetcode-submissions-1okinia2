class Solution {
public:
    int maxArea(vector<int>& heights) {
        int low=0;
        int high=heights.size()-1;
        int res=0;
        while(low<high)
        {
            if(heights[low]<heights[high])
            {
                res=max(res,heights[low]*(high-low));
                low++;
            }
            else{
                res=max(res,heights[high]*(high-low));
                high--;
            }
        }
        return res;
    }
};
