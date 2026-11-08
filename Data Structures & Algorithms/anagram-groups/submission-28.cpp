class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>pa;
        for(string i:strs)
        {
            string x=i;
            sort(x.begin(),x.end());
            pa[x].push_back(i);
        }
        for(auto& i:pa)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};
