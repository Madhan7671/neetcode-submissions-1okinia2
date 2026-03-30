class Solution {
public:
vector<vector<int>>ans;
vector<int>arr;
void fn(int i,vector<int>curr)
{
    if(i==arr.size())
    {
        ans.push_back(curr);
        return;
    }
    curr.push_back(arr[i]);
    fn(i+1,curr);
    curr.pop_back();
    int x=i+1;
    while(i<arr.size() && arr[i]==arr[x])
    {
        x++;
    }
    fn(x,curr);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        arr=nums;
        sort(arr.begin(),arr.end());
        vector<int>curr;
        fn(0,curr);
        return ans;
    }
};
