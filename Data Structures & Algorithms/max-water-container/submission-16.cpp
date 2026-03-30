class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area=0;
        int left=0;
        int right=heights.size()-1;
        while(left<=right)
        {
            if(heights[left]<heights[right])
            {
                area=max(area,(right-left)*heights[left]);
                left++;
            }
            else{
                area=max(area,(right-left)*heights[right]);
                right--;
            }
        }
        return area;
    }
};
