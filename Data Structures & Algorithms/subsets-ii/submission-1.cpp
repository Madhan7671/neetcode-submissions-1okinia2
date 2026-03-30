class Solution {
public:
vector<vector<int>>ans;
vector<int>arr;
void fn(int i,vector<int>& combo)
{
    if(i>=arr.size())
    {
        ans.push_back(combo);
        return;
    }
    combo.push_back(arr[i]);
    fn(i+1,combo);
    combo.pop_back();
    int x=i+1;
    while(x<arr.size() && arr[x]==arr[i])
    {
        x++;
    }
    fn(x,combo);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>subset;
        arr=nums;
        sort(arr.begin(),arr.end());
        fn(0,subset);
        return ans;
    }
};
