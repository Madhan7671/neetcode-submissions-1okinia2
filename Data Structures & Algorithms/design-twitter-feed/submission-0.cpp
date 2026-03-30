class Twitter {
public:
unordered_map<int,vector<pair<int,int>>>tweets;
unordered_map<int,unordered_set<int>>follwer;
int time;
    Twitter() {
        time=0;
    }
    
    void postTweet(int userId, int tweetId) {
        tweets[userId].push_back({time,tweetId});
        time++;
    }
    
    vector<int> getNewsFeed(int userId) {
        priority_queue<pair<int,int>>pq;
        for(auto& i:tweets[userId])
        {
            pq.push(i);
        }
        for(auto& i:follwer[userId])
        {
            for(auto& j:tweets[i])
            {
                pq.push(j);
            }
        }
        int k=10;
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
        follwer[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        follwer[followerId].erase(followeeId);
    }
};
