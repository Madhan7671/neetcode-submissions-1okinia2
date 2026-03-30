class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(string s:strs)
        {
            ans+=to_string(s.size())+"#"+s;
        }
        return ans;
    }

    vector<string> decode(string s) {
        int i=0;
        int n=s.size();
        vector<string>ans;
        while(i<n)
        {
            int j=i;
            while(s[j]!='#')
            {
                j++;
            }
            int len=stoi(s.substr(i,j-i));
            i=j+1;
            ans.push_back(s.substr(i,len));
            i+=len;
        }
        return ans;
    }
};
