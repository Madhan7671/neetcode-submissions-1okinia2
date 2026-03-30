class Solution {
public:
    string foreignDictionary(vector<string>& words) {
        unordered_map<char,int>indegree;
        unordered_map<char,unordered_set<char>>mp;
        for(string i:words)
        {
            for(char ch:i)
            {
                indegree[ch]=0;
            }
        }
        for(int i=0;i<words.size()-1;i++)
        {
            string w1=words[i];
            string w2=words[i+1];
            bool found=false;
            for(int j=0;j<min(w1.size(),w2.size());j++)
            {
                char c1=w1[j];
                char c2=w2[j];
                if(c1!=c2)
                {
                    if(!mp[c1].count(c2))
                    {
                        mp[c1].insert(c2);
                        indegree[c2]++;
                        
                    }
                    found=true;
                    break;
                } 
            }
            if(!found && w1.size()>w2.size())
            {
                return "";
            }
        }
        queue<char>q;
        for(auto& i:indegree)
        {
            if(i.second==0)
            {
                q.push(i.first);
            }
        }
        string res;
        while(!q.empty())
        {
            char temp=q.front();
            q.pop();
            res+=temp;
            for(char i:mp[temp])
            {
                indegree[i]--;
                if(indegree[i]==0)
                {
                    q.push(i);
                }
            }
        }
        return(res.size()==indegree.size()?res:"");
    }
};
