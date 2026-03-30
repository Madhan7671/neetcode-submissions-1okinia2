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
    if(target <0 || i>=arr.size())
    {
        return;
    }
    combo.push_back(arr[i]);
    fn(i,target-arr[i],combo);
    combo.pop_back();
    fn(i+1,target,combo);
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        arr=nums;
        vector<int>combo;
        fn(0,target,combo);
        return(ans);
    }
};
