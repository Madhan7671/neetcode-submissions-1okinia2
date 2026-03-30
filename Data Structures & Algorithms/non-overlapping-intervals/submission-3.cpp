class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int count=0;
        sort(intervals.begin(),intervals.end(),[](auto& a,auto& b){
            return(a[1]<b[1]);
        });
        int n=intervals.size();
        int end=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(intervals[i][0]>=end)
            {
                end=intervals[i][1];
            }
            else{
                count++;
            }
        }
        return count;
    }
};
