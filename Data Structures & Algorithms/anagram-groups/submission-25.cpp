class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>ans;
        for(string s:strs)
        {
            string x=s;
            sort(s.begin(),s.end());
            mp[s].push_back(x);
        }
        for(auto& i:mp)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};
