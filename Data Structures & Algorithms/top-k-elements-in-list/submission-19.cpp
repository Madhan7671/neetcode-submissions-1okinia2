class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp1;
        for(int i:nums)
        {
            mp1[i]++;
        }
        vector<pair<int,int>>pa;
        for(auto& i:mp1)
        {
            pa.push_back({i.second,i.first});
        }
        sort(pa.rbegin(),pa.rend());
        vector<int>ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(pa[i].second);
        }
        return ans;
    }
};
