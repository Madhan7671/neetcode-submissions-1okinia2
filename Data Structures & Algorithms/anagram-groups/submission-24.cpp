class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(string s:strs)
        {
            string a=s;
            sort(s.begin(),s.end());
            mp[s].push_back(a);
        }
        for(auto& i:mp)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};
