class Solution {
public:
vector<vector<int>>ans;
vector<int>res;
void fn(int i,vector<int>& curr)
{
    if(i==res.size())
    {
        ans.push_back(curr);
        return;
    }
    curr.push_back(res[i]);
    fn(i+1,curr);
    curr.pop_back();
    int x=i+1;
    while(x<res.size() && res[i]==res[x])
    {
        x++;
    }
    fn(x,curr);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        res=nums;
        vector<int>curr;
        sort(res.begin(),res.end());
        fn(0,curr);
        return ans;
    }
};
