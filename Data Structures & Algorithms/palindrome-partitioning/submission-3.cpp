class Solution {
public:
vector<vector<string>>ans;
bool ispalin(string x)
{
    int low=0;
    int high=x.size()-1;
    while(low<=high)
    {
        if(x[low]!=x[high])
        {
            return false;
        }
        low++;
        high--;
    }
    return true;
}
void fn(string s,vector<string>x)
{
    if(s.size()==0)
    {
        ans.push_back(x);
        return;
    }
    for(int i=0;i<s.size();i++)
    {
        if(ispalin(s.substr(0,i+1)))
        {
            x.push_back(s.substr(0,i+1));
            fn(s.substr(i+1),x);
            x.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<string>x;
        fn(s,x);
        return ans;
    }
};
