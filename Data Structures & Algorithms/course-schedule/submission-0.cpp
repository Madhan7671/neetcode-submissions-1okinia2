class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>ans(numCourses);
        int count=0;
        vector<int>indegree(numCourses,0);
        for(auto& i:prerequisites)
        {
            int u= i[0];
            int v=i[1];
            ans[v].push_back(u);
            indegree[u]++;
        }
        queue<int>q;
        for(int i=0;i<numCourses;i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
        while(!q.empty())
        {
            int x=q.front();
            q.pop();
            for(int i:ans[x])
            {
                indegree[i]--;
                if(indegree[i]==0)
                {
                    q.push(i);
                }
            }
            count++;
        }
        return(count==numCourses);
    }
};
