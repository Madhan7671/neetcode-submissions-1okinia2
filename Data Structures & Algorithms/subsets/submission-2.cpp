class Solution {
public:
vector<vector<int>>ans;
vector<int>arr;
void fn(int i,vector<int>& curr)
{
    if(i==arr.size())
    {
        ans.push_back(curr);
        return;
    }
    curr.push_back(arr[i]);
    fn(i+1,curr);
    curr.pop_back();
    fn(i+1,curr);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        arr=nums;
        vector<int>curr;
        fn(0,curr);
        return ans;
    }
};
