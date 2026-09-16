class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp1;
        for(string s:strs)
        {
            string x=s;
            sort(x.begin(),x.end());
            mp1[x].push_back(s);
        }
        for(auto& i:mp1)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};
