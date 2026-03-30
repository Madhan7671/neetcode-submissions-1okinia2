class Solution {
public:
vector<vector<string>>ans;
bool palin(string s)
{
    int low=0;
    int high=s.size()-1;
    while(low<high)
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
void fn(string s1,vector<string>& curr)
{
    if(s1.size()==0)
    {
        ans.push_back(curr);
        return;
    }
    for(int i=0;i<s1.size();i++)
    {
        if(palin(s1.substr(0,i+1)))
        {
            curr.push_back(s1.substr(0,i+1));
            fn(s1.substr(i+1),curr);
            curr.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<string>curr;
        fn(s,curr);
        return ans;
    }
};
