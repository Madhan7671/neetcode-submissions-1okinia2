class Solution {
public:
unordered_map<string,priority_queue<string,vector<string>,greater<>>>pq;
vector<string>ans;
void fn(string i)
{
    auto& j=pq[i];
    while(!j.empty())
    {
        string k=j.top();
        j.pop();
        fn(k);
    }
    ans.push_back(i);
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
