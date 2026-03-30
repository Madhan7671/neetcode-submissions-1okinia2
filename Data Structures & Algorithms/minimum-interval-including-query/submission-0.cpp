class Solution {
public:
    vector<int> minInterval(vector<vector<int>>& intervals, vector<int>& queries) {
        vector<int>ans;
        for(int q:queries)
        {
            int curr=-1;
            for(int i=0;i<intervals.size();i++)
            {
                int low=intervals[i][0];
                int high=intervals[i][1];
                if(low<=q && q<=high)
                {
                    if(curr==-1 || (curr>(high-low+1)))
                    {
                        curr=high-low+1;
                    }
                }
            }
            ans.push_back(curr);
        }
        return ans;
    }
};
