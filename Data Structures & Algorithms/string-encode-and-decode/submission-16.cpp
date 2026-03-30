class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for(string i:strs)
        {
            ans+=to_string(i.length())+'#'+i;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
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
        string a=s.substr(i,len);
        ans.push_back(a);
        i+=len;
        }
        return ans;
    }
};
