class Solution {
public:
    string simplifyPath(string path) {
        string x="/";
        stringstream ss(path);
        vector<string>ans;
        string z;
        while(getline(ss,z,'/'))
        {
            if(z=="" || z==".")
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
            x+=ans[i];
            if(i!=ans.size()-1)
            {
                x+='/';
            }
        }
        return x;
    }
};