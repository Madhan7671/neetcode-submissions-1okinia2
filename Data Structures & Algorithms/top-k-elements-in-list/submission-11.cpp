class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>>ans;
        unordered_map<int,int>mp;
        for(int i:nums)
        {
            mp[i]++;
        }
        for(auto& i:mp)
        {
            ans.push_back({i.second,i.first});
        }
        sort(ans.rbegin(),ans.rend());
        vector<int>a;
        for(int i=0;i<k;i++)
        {
            a.push_back(ans[i].second);
        }
        return a;
    }
};
