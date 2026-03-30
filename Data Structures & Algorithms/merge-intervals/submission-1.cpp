class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>>res;
        if(n==0)
        {
            return res;
        }
        sort(intervals.begin(),intervals.end());
        vector<int>current=intervals[0];
        for(int i=1;i<n;i++)
        {
            if(intervals[i][0]<=current[1])
            {
                current[1]=max(intervals[i][1],current[1]);
            }
            else{
                res.push_back(current);
                current=intervals[i];
            }
        }
        res.push_back(current);
        return(res);
    }
};
