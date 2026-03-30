class Solution {
public:
    int largestRectangleArea(vector<int>& nums) {
        stack<int>left;
        stack<int>right;
        int n=nums.size();
        vector<int>rs(n,n);
        vector<int>ls(n,-1);
        for(int i=n-1;i>=0;i--)
        {
            while(!right.empty() && nums[right.top()]>=nums[i])
            {
                right.pop();
            }
            if(!right.empty())
            {
                rs[i]=right.top();
            }
            right.push(i);
        }
        for(int i=0;i<n;i++)
        {
            while(!left.empty() && nums[left.top()]>=nums[i])
            {
                left.pop();
            }
            if(!left.empty())
            {
                ls[i]=left.top();
            }
            left.push(i);
        }
        int maxe=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int width=rs[i]-ls[i]-1;
            maxe=max(maxe,width*nums[i]);
        }
        return maxe;
    }
};
