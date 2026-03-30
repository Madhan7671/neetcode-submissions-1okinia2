class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>ad(numCourses);
        vector<int>indegree(numCourses,0);
        for(auto& i:prerequisites)
        {
            ad[i[1]].push_back(i[0]);
            indegree[i[0]]++;
        }
        queue<int>q;
        int count=0;
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
            for(int m:ad[x])
            {
                indegree[m]--;
                if(indegree[m]==0)
                {
                    q.push(m);
                }
            }
            count++;
        }
        return(numCourses==count);
    }
};
