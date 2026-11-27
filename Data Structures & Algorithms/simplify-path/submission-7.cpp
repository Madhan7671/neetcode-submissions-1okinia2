class Solution {
public:
    string simplifyPath(string path) {
        string z="";
        string res="/";
        vector<string>ans;
        stringstream ss(path);
        while(getline(ss,z,'/'))
        {
            if(z=="." || z=="")
            {
                continue;
            }
            else if(z=="..")
            {
                if(!ans.empty())
                {
                    ans.pop_back();
                }
            }
            else{
                ans.push_back(z);
            }
        }
        for(int i=0;i<ans.size();i++)
        {
            res+=ans[i];
            if(i!=ans.size()-1)
            {
                res+='/';
            }
        }
        return res;
    }
};