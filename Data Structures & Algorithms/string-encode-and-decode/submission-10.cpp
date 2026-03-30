class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        for(string i:strs)
        {
            res+=to_string(i.size())+"#"+i;
        }
        return res;
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
            j=i+len;
            i=j;
        }
        return ans;
    }
};
