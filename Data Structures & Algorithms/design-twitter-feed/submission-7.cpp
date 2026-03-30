class Twitter {
public:
int time;
    Twitter() {
        time=0;
    }
    unordered_map<int,vector<pair<int,int>>>tweets;
    unordered_map<int,unordered_set<int>>followers;
    void postTweet(int userId, int tweetId) {
        tweets[userId].push_back({time,tweetId});
        time++;
    }
    
    vector<int> getNewsFeed(int userId) {
        int k=10;
        priority_queue<pair<int,int>>pq;
        for(auto& i:tweets[userId])
        {
            pq.push(i);
        }
        for(auto& i:followers[userId])
        {
            for(auto& j:tweets[i])
            {
                pq.push(j);
            }
        }
        vector<int>ans;
        while(!pq.empty() && k!=0)
        {
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;
    }
    
    void follow(int followerId, int followeeId) {
        if(followerId==followeeId)
        {
            return;
        }
        followers[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        followers[followerId].erase(followeeId);
    }
};
