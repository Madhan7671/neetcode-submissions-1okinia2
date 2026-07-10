class Solution {
public:
vector<int>combo;
vector<int>res;
vector<vector<int>>ans;
void fn(int i,int target)
{
    if(target==0)
    {
        ans.push_back(combo);
        return;
    }
    if(i>=res.size() || target<0)
    {
        return;
    }
   
    combo.push_back(res[i]);
    fn(i+1,target-res[i]);
    int x=i+1;
    while(x<res.size() && res[i]==res[x])
    {
        x++;
    }
    combo.pop_back();
    fn(x,target);
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        res=candidates;
        sort(res.begin(),res.end());
        fn(0,target);
        return ans;
    }
};
