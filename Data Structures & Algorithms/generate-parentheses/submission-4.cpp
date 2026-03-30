class Solution {
public:
vector<string>ans;
void fn(int open,int close,string x)
{
    if(open==0 && close==0)
    {
        ans.push_back(x);
    }
    if(open>0)
    {
        fn(open-1,close,x+'(');
    }
    if(close>open)
    {
        fn(open,close-1,x+')');
    }
}
    vector<string> generateParenthesis(int n) {
        fn(n,n,"");
        return ans;
    }
};
