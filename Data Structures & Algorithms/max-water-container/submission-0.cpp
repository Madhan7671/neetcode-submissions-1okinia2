class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxi=0;
        int low=0;
        int high=heights.size()-1;
        while(low<high)
        {
            if(heights[low]<heights[high])
            {
                maxi=max(maxi,(high-low)*heights[low]);
                low++;
            }
            else{
                maxi=max(maxi,(high-low)*heights[high]);
                high--;
            }
        }
        return maxi;
    }
};
