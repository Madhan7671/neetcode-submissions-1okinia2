class Solution {
public:
    int largestRectangleArea(vector<int>& nums) {
        int n=nums.size();
        vector<int>left(n,-1),right(n,n);
        stack<int>s1,s2;
        for(int i=0;i<n;i++)
        {
            while(!s1.empty() && nums[s1.top()]>=nums[i])
            {
                s1.pop();
            }
            if(!s1.empty())
            {
                left[i]=s1.top();
            }
            s1.push(i);
        }
        for(int i=n-1;i>=0;i--)
        {
            while(!s2.empty() && nums[s2.top()]>=nums[i])
            {
                s2.pop();
            }
            if(!s2.empty())
            {
                right[i]=s2.top();
            }
            s2.push(i);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int width=right[i]-left[i]-1;
            ans=max(ans,width*nums[i]);
        }
        return ans;
    }
};
