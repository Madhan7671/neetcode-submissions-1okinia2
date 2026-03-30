class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(string i:strs)
        {
            res+=to_string(i.size())+'#'+i;
        }
        return res;
    }

    vector<string> decode(string s) {
        int i=0;
        vector<string>st;
        while(i<s.size())
        {
            int j=i;
            while(s[j]!='#')
            {
                j++;
            }
            int length=stoi(s.substr(i,j-i));
            i=j+1;
            j=length+i;
            string x=s.substr(i,length);
            st.push_back(x);
            i=j;
        }
        return st;
    }
};
