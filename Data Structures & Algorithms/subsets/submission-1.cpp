class Solution {
public:
vector<int>arr;
vector<vector<int>>ans;
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
    vector<vector<int>> subsets(vector<int>& nums) {
        arr=nums;
        vector<int>subset;
        subsets(0,subset);
        return ans;
    }
};
