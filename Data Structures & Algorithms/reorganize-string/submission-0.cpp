class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>mp;
        for(char ch:s)
        {
            mp[ch]++;
        }
        string ans="";
        priority_queue<pair<int,char>>pq;
        for(auto& i:mp){
            pq.push({i.second,i.first});
        }
        pair<int,char>prev={0,'#'};
        while(!pq.empty())
        {
            auto curr=pq.top();
            pq.pop();
            curr.first--;
            ans+=curr.second;
            if(prev.first>0)
            {
                pq.push(prev);
            }
            prev=curr;
        }
        if(ans.size()!=s.size())
        {
            return "";
        }
        return ans;
    }
};