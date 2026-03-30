class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp1;
        for(string i:strs)
        {
            string x=i;
            sort(x.begin(),x.end());
            mp1[x].push_back(i);
        }
        vector<vector<string>>ans;
        for(auto& i:mp1)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};
