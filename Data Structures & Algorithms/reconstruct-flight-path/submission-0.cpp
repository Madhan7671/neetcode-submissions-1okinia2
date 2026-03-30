class Solution {
public:
unordered_map<string,priority_queue<string,vector<string>,greater<>>>pq;
vector<string>ans;
void fn(string s)
{
    auto& i=pq[s];
    while(!i.empty())
    {
        string next=i.top();
        i.pop();
        fn(next);
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
