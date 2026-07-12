class Solution {
public:
vector<vector<int>>ans;
vector<int>res;
void fn(int i)
{
    if(i==res.size())
    {
        ans.push_back(res);
        return;
    }
    for(int j=i;j<res.size();j++)
    {
        swap(res[i],res[j]);
        fn(i+1);
        swap(res[i],res[j]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        res=nums;
        fn(0);
        return ans;
    }
};
