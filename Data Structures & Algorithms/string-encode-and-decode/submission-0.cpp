class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        for(int i=0;i<strs.size();i++)
        {
            res+=to_string(strs[i].size())+'#'+strs[i];
        }
        return res;
    }

    vector<string> decode(string s) {
        int i=0;
        vector<string>res;
        while(i<s.size())
        {
            int j=i;
            while(s[j]!='#')
            {
                j++;
            }
            int length=stoi(s.substr(i,j-i));
            i=j+1;
            j=i+length;
            res.push_back(s.substr(i,length));
            i=j;
        }
        return res;
    }
};
