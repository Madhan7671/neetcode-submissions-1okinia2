class Solution {
public:
vector<vector<int>>ans;
void fn(int i,int n,int k,vector<int>curr)
{
    if(curr.size()==k)
    {
        ans.push_back(curr);
    }
    for(int j=i;j<=n;j++)
    {
        curr.push_back(j);
        fn(j+1,n,k,curr);
        curr.pop_back();
    }
}
    vector<vector<int>> combine(int n, int k) {
        vector<int>curr;
        fn(1,n,k,curr);
        return ans;
    }
};