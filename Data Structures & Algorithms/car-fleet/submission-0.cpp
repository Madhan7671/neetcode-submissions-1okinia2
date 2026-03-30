class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>>pair;
        for(int i=0;i<position.size();i++)
        {
            pair.push_back({position[i],speed[i]});
        }
        sort(pair.rbegin(),pair.rend());
        vector<double>ans;
        for(auto& i:pair)
        {
            double x=(double)(target-i.first)/i.second;
            ans.push_back(x);
            if(ans.size()>=2 && ans.back() <= ans[ans.size()-2])
            {
                ans.pop_back();
            }
        }
        return ans.size();
    }
};
