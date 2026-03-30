class Solution {
public:
vector<string>ans;
void fn(int open,int close,string curr)
{
    if(open==0 && close==0)
    {
        ans.push_back(curr);
    }
    if(open>0)
    {
        fn(open-1,close,curr+'(');
    }
    if(close>open)
    {
        fn(open,close-1,curr+')');
    }

}
    vector<string> generateParenthesis(int n) {
        fn(n,n,"");
        return(ans);
    }
};