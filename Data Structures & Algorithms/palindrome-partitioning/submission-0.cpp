class Solution {
public:
vector<vector<string>>ans;
bool palin(string s)
{
    int low=0;
    int high=s.size()-1;
    while(low<=high)
    {
        if(s[low]!=s[high])
        {
            return false;
        }
        low++;
        high--;
    }
    return true;
}
void fn(string s,vector<string>& part)
{
    if(s.size()==0)
    {
        ans.push_back(part);
        return;
    }
    for(int i=0;i<s.size();i++)
    {
        if(palin(s.substr(0,i+1)))
        {
            part.push_back(s.substr(0,i+1));
            fn(s.substr(i+1),part);
            part.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<string>part;
        fn(s,part);
        return ans;
    }
};
