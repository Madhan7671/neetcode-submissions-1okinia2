class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(string s1:strs)
        {
            string s2=s1;
            sort(s2.begin(),s2.end());
            mp[s2].push_back(s1);
        }
        for(auto& i:mp)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};
