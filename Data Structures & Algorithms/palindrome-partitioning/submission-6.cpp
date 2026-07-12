class Solution {
public:
vector<vector<string>>ans;
bool ispalin(string s)
{
    int left=0;
    int right=s.size()-1;
    while(left<=right)
    {
        if(s[left]!=s[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
void fn(string s,vector<string>curr)
{
    if(s.size()==0)
    {
        ans.push_back(curr);
    }
    for(int j=0;j<s.size();j++)
    {
        if(ispalin(s.substr(0,j+1)))
        {
            curr.push_back(s.substr(0,j+1));
            fn(s.substr(j+1),curr);
            curr.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<string>str;
        fn(s,str);
        return ans;
    }
};
