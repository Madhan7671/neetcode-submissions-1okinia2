class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        vector<int>indegree(numCourses,0);
        for(auto& i:prerequisites)
        {
            adj[i[1]].push_back(i[0]);
            indegree[i[0]]++;
        }
        queue<int>q;
        for(int i=0;i<indegree.size();i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
        vector<int>ans;
        while(!q.empty())
        {
            int v=q.front();
            q.pop();
            ans.push_back(v);
            for(int i:adj[v])
            {
                indegree[i]--;
                if(indegree[i]==0)
                {
                    q.push(i);
                }
            }
        }
        return(ans.size()!=numCourses?vector<int>{}:ans);
    }
};
