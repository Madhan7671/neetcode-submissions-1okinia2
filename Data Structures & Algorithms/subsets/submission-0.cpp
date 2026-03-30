class Solution {
public:
vector<vector<int>>ans;
vector<int>arr;
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>subset;
        arr=nums;
        subsets(0,subset);
        return ans;
    }
void subsets(int i,vector<int>& subset)
{
    if(i>=arr.size())
    {
        ans.push_back(subset);
        return;
    }
    subset.push_back(arr[i]);
    subsets(i+1,subset);
    subset.pop_back();
    subsets(i+1,subset);
}
};
