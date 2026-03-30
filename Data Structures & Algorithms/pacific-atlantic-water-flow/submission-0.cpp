class Solution {
public:
int m,n;
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        m=heights.size();
        n=heights[0].size();
        vector<vector<int>>ans;
        if(heights.size()==0)
        {
            return ans;
        }
        vector<vector<int>>pacific(m,vector<int>(n,0));
        vector<vector<int>>atlantic(m,vector<int>(n,0));
        for(int i=0;i<n;i++)
        {
            fn(heights,pacific,0,i,INT_MIN);
            fn(heights,atlantic,m-1,i,INT_MIN);
        }
        for(int i=0;i<m;i++)
        {
            fn(heights,pacific,i,0,INT_MIN);
            fn(heights,atlantic,i,n-1,INT_MIN);
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(pacific[i][j]==1 && atlantic[i][j]==1)
                {
                    ans.push_back({i,j});
                }
            }
        }
        return ans;
    }
    void fn(vector<vector<int>>&heights,vector<vector<int>>& ocean,int i,int j,int prev)
    {
        if(i<0 || j<0 || i>=m || j>=n || ocean[i][j]==1 || heights[i][j]<prev)
        {
            return;
        }
        ocean[i][j]=1;
        fn(heights,ocean,i+1,j,heights[i][j]);
        fn(heights,ocean,i-1,j,heights[i][j]);
        fn(heights,ocean,i,j+1,heights[i][j]);
        fn(heights,ocean,i,j-1,heights[i][j]);
    }
};
