class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i:nums)
        {
            mp[i]++;
        }
        vector<pair<int,int>>ans;
        for(auto& i:mp)
        {
            ans.push_back({i.second,i.first});
        }
        sort(ans.rbegin(),ans.rend());
        vector<int>res;
        for(int i=0;i<k;i++)
        {
            res.push_back(ans[i].second);
        }
        return res;
    }
};
