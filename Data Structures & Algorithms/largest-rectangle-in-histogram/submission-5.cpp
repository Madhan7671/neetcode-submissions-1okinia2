class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>left(n,-1),right(n,n);
        stack<int>s1;
        for(int i=n-1;i>=0;i--)
        {
            while(!s1.empty() && heights[s1.top()]>=heights[i])
            {
                s1.pop();
            }
            if(!s1.empty())
            {
                right[i]=s1.top();
            }
            s1.push(i);
        }
        while(!s1.empty())
        {
            s1.pop();
        }
        for(int i=0;i<n;i++)
        {
            while(!s1.empty() && heights[s1.top()]>=heights[i])
            {
                s1.pop();
            }
            if(!s1.empty())
            {
                left[i]=s1.top();
            }
            s1.push(i);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int width=right[i]-left[i]-1;
            ans=max(ans,heights[i]*width);
        }
        return ans;
    }
};
