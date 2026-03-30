class Solution {
public:
    string simplifyPath(string path) {
        vector<string>ans;
        stringstream ss(path);
        string i;
        while(getline(ss,i,'/'))
        {
            if(i=="" || i==".")
            {
                continue;
            }
            if(i=="..")
            {
                if(!ans.empty()){
                ans.pop_back();
                }
            }
            else{
                ans.push_back(i);
            }
        }
        string s="/";
        for(int i=0;i<ans.size();i++)
        {
            s+=ans[i];
            if(i!=ans.size()-1)
            {
                s+="/";
            }
        }
        return s;
    }
};