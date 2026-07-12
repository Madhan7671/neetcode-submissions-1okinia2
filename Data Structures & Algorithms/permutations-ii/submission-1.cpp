class Solution {
public:
vector<vector<int>>ans;
vector<int>res;
void fn(int i)
{
    if(i==res.size())
    {
        ans.push_back(res);
        return;
    }
    unordered_set<int>st;
    for(int j=i;j<res.size();j++)
    {
        if(st.count(res[j]))
        {
            continue;
        }
        st.insert(res[j]);
        swap(res[i],res[j]);
        fn(i+1);
        swap(res[i],res[j]);
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        res=nums;
        fn(0);
        return ans;
    }
};