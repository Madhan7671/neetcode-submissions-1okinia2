class Solution {
public:
vector<vector<int>>ans;
vector<int>arr;
void fn(int i,int target,vector<int>curr)
{
    if(target==0)
    {
        ans.push_back(curr);
        return;
    }
    if(target<0 || i>=arr.size())
    {
        return;
    }
    curr.push_back(arr[i]);
    fn(i,target-arr[i],curr);
    curr.pop_back();
    fn(i+1,target,curr);
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        arr=nums;
        vector<int>curr;
        fn(0,target,curr);
        return ans;
    }
};
