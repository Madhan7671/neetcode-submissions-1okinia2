class Solution {
public:
unordered_set<string>dict;
string str;
vector<string> fn(int i)
{
    vector<string>res;
    if(i==str.size())
    {
        res.push_back("");
    }
    for(int j=i+1;j<=str.size();j++)
    {
        string word=str.substr(i,j-i);
        if(dict.count(word))
        {
            vector<string>temp=fn(j);
            for(string s:temp)
            {
                res.push_back(word+(s==""?"":" "+s));
            }
        }
    }
    return res;
}
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        dict=unordered_set<string>(wordDict.begin(),wordDict.end());
        str=s;
        return(fn(0));
    }
};