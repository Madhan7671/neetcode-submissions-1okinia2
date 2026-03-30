class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int n=heights.size();
        vector<int>right(n,n),left(n,-1);
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
            {
                st.pop();
            }
            if(!st.empty())
            {
                left[i]=st.top();
            }
            st.push(i);
        }
        while(!st.empty())
        {
            st.pop();
        }
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
            {
                st.pop();
            }
            if(!st.empty())
            {
                right[i]=st.top();
            }
            st.push(i);
        }
        int maxsum=0;
        for(int i=0;i<n;i++)
        {
            int width=right[i]-left[i]-1;
            maxsum=max(maxsum,heights[i]*width);
        }
        return maxsum;
    }
};
