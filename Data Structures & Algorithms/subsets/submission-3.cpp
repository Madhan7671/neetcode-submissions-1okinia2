class Solution {
public:
vector<vector<int>>ans;
vector<int>res;
void fn(int i,vector<int>curr)
{
    if(i==res.size())
    {
        ans.push_back(curr);
        return;
    }
    curr.push_back(res[i]);
    fn(i+1,curr);
    curr.pop_back();
    fn(i+1,curr);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        res=nums;
        vector<int>x;
        fn(0,x);
        return ans;
    }
};
