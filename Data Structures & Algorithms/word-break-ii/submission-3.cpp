class Solution {
public:
unordered_set<string>dict;
string str;
vector<string> fn(int index)
{
    vector<string>res;
    if(index==str.size())
    {
        res.push_back("");
    }
    for(int i=index+1;i<=str.size();i++)
    {
        string word=str.substr(index,i-index);
        if(dict.count(word))
        {
            vector<string>temp=fn(i);
            for(string s:temp)
            {
                res.push_back(word+(s==""?"":" "+s));
            }
        }
    }
    return res;
}
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        str=s;
        dict=unordered_set<string>(wordDict.begin(),wordDict.end());
        return(fn(0));
    }
};