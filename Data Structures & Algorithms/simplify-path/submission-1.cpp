class Solution {
public:
    string simplifyPath(string path) {
        vector<string>ans;
        stringstream ss(path);
        string token;
        while(getline(ss,token,'/'))
        {
            if(token=="" || token==".")
            {
                continue;
            }
            if(token=="..")
            {
                if(!ans.empty())
                {
                    ans.pop_back();
                }
            }
            else{
                ans.push_back(token);
            }
        }
        string res="/";
        for(int i=0;i<ans.size();i++)
        {
            res+=ans[i];
            if(i!=ans.size()-1){
                res+="/";
            }
        }
        return res;
    }
};