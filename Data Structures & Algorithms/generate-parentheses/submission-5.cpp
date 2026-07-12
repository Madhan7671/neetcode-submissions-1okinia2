class Solution {
public:
vector<string>ans;
void fn(int open,int close,string s)
{
    if(open==0 && close==0)
    {
        ans.push_back(s);
        return;
    }
    if(open>0)
    {
        fn(open-1,close,s+'(');
    }
    if(close>open)
    {
        fn(open,close-1,s+')');
    }
}
    vector<string> generateParenthesis(int n) {
        fn(n,n,"");
        return ans;
    }
};
