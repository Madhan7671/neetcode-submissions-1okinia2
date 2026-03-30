class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int>travel(1001,0);
        for(int i=0;i<trips.size();i++)
        {
            int passengers=trips[i][0];
            int from=trips[i][1];
            int to=trips[i][2];
            travel[from]+=passengers;
            travel[to]-=passengers;
        }
        int result=0;
        for(int i=0;i<=1000;i++)
        {
            result+=travel[i];
            if(result>capacity)
            {
                return false;
            }
        }
        return true;
    }
};