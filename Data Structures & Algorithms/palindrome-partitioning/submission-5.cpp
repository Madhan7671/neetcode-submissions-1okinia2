class Solution {
public:
vector<vector<string>>ans;
bool ispalin(string s)
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
void fn(string s,vector<string>str)
{
    if(s.size()==0)
    {
        ans.push_back(str);
        return;
    }
    for(int i=0;i<s.size();i++)
    {
        if(ispalin(s.substr(0,i+1)))
        {
            str.push_back(s.substr(0,i+1));
            fn(s.substr(i+1),str);
            str.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<string>curr;
        fn(s,curr);
        return ans;
    }
};
