class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>>pa;
        for(int i=0;i<position.size();i++)
        {
            pa.push_back({position[i],speed[i]});
        }
        sort(pa.rbegin(),pa.rend());
        vector<double>ans;
        for(auto& i:pa)
        {
            ans.push_back((double)(target-i.first)/i.second);
            if(ans.size()>=2 && ans.back()<=ans[ans.size()-2])
            {
                ans.pop_back();
            }
        }
        return(ans.size());
    }
};
