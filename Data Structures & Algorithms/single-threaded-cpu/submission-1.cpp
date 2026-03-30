class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        vector<vector<int>>task;
        int n=tasks.size();
        for(int i=0;i<n;i++)
        {
            task.push_back({tasks[i][0],tasks[i][1],i});
        }
        sort(task.begin(),task.end());
        vector<int>ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;
        int i=0;
        long long time=0;
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
            auto curr=pq.top();
            pq.pop();
            time+=curr.first;
            ans.push_back(curr.second);
        }
        return ans;
    }
};