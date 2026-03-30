#include<bits/stdc++.h>
class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for(string i:strs)
        {
            s+=to_string(i.size())+"#"+i;
        }
        return s;
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
            j=i+len;
            i=j;
        }
        return ans;
    }
};
