class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        int maxe=0;
        while(left<=right)
        {
            if(heights[left]<heights[right])
            {
                maxe=max(maxe,(right-left)*heights[left]);
                left++;
            }
            else{
                maxe=max(maxe,(right-left)*heights[right]);
                right--;
            }

        }
        return maxe;
    }
};
