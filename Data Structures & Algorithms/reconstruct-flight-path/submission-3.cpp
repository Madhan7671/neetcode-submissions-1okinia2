class Solution {
public:
vector<string>ans;
unordered_map<string,priority_queue<string,vector<string>,greater<>>>pq;
void fn(string s)
{
    auto& j=pq[s];
    while(!j.empty())
    {
        string k=j.top();
        j.pop();
        fn(k);
    }
    ans.push_back(s);
}
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        for(auto& i:tickets)
        {
            pq[i[0]].push(i[1]);
        }
        fn("JFK");
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
