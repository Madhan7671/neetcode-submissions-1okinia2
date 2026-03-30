class Solution {
public:
vector<vector<int>>ans;
void fn(int start,int end,int k,vector<int>curr)
{
    if(curr.size()==k)
    {
        ans.push_back(curr);
        return;
    }
    for(int i=start;i<=end;i++)
    {
        curr.push_back(i);
        fn(i+1,end,k,curr);
        curr.pop_back();
    }
}
    vector<vector<int>> combine(int n, int k) {
        vector<int>curr;
        fn(1,n,k,curr);
        return ans;
    }
};