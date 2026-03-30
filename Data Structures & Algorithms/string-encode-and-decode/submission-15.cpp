class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(string s:strs)
        {
            ans+=to_string(s.length())+'#'+s;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        int i=0;
        int n=s.size();
        while(i<n)
        {
            int j=i;
            while(s[j]!='#')
            {
                j++;
            }
            int length=stoi(s.substr(i,j-i));
            i=j+1;
            string m=s.substr(i,length);
            ans.push_back(m);
            i+=length;
        }
        return ans;
    }
};
