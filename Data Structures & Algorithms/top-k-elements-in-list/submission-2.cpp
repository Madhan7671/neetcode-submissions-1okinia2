class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i:nums)
        {
            mp[i]++;
        }
        vector<pair<int,int>>mad;
        for(auto& i:mp)
        {
            mad.push_back({i.second,i.first});
        }
        sort(mad.rbegin(),mad.rend());
        vector<int>ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(mad[i].second);
        }
        return ans;
    }
};
