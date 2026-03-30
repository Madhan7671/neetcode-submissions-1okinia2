class Solution {
public:
vector<vector<int>>ans;
vector<int>arr;
void fn(int i)
{
    if(i==arr.size())
    {
        ans.push_back(arr);
        return;
    }
    unordered_set<int>used;
    for(int j=i;j<arr.size();j++)
    {
        if(used.count(arr[j]))
        {
            continue;
        }
        used.insert(arr[j]);
        swap(arr[i],arr[j]);
        fn(i+1);
        swap(arr[i],arr[j]);
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        arr=nums;
        fn(0);
        return ans;
    }
};