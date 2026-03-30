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
            int len=stoi(s.substr(i,j-i));
            i=j+1;
            ans.push_back(s.substr(i,len));
            i+=len;
        }
        return ans;
    }
};
