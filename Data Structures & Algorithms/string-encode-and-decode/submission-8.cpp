class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(string i:strs)
        {
            ans+=to_string(i.size())+'#'+i;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        int i=0;
        while(i<s.size())
        {
            int j=i;
            while(s[j]!='#')
            {
                j++;
            }
            int len=stoi(s.substr(i,j-i));
            i=j+1;
            ans.push_back(s.substr(i,len));
            j=len+i;
            i=j;
        }
        return ans;
    }
};
