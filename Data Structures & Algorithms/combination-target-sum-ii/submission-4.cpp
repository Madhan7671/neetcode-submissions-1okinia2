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
    if(target<0 || i>=arr.size()){
        return;
    }
    curr.push_back(arr[i]);
    fn(i+1,target-arr[i],curr);
    curr.pop_back();
    int x=i+1;
    while(x<arr.size() && arr[x]==arr[i])
    {
        x++;
    }
    fn(x,target,curr);
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        arr=candidates;
        sort(arr.begin(),arr.end());
        vector<int>curr;
        fn(0,target,curr);
        return ans;
    }
};
