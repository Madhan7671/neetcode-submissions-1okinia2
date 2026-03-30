class Solution {
public:
vector<vector<int>>ans;
vector<int>arr;
void fn(int i,int target,vector<int>& combo)
{
    if(target==0)
    {
        ans.push_back(combo);
        return;
    }
    if(target<0 || i>=arr.size())
    {
        return;
    }
    combo.push_back(arr[i]);
    fn(i+1,target-arr[i],combo);
    combo.pop_back();
    int x=i+1;
    while(x<arr.size() && arr[x]==arr[i])
    {
        x++;
    }
    fn(x,target,combo);
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        arr=candidates;
        sort(arr.begin(),arr.end());
        vector<int>combo;
        fn(0,target,combo);
        return ans;
    }
};
