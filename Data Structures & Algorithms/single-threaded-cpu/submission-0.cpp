class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        vector<vector<int>>task;
        for(int i=0;i<tasks.size();i++)
        {
            task.push_back({tasks[i][0],tasks[i][1],i});
        }
        sort(task.begin(),task.end());
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;
        vector<int>ans;
        long long time=0;
        int i=0;
        int n=tasks.size();
        while(i<n || !pq.empty())
        {
            if(pq.empty() && time<task[i][0])
            {
                time=task[i][0];
            }
            while(i<n && task[i][0]<=time)
            {
                pq.push({task[i][1],task[i][2]});
                i++;
            }
            auto x=pq.top();
            pq.pop();
            time+=x.first;
            ans.push_back(x.second);
        }
        return ans;
    }
};