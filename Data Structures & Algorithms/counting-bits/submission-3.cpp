class Solution {
public:
int count(int i)
{
    int res=0;
    while(i>0)
    {
        i=i&(i-1);
        res++;
    }
    return res;
}
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++)
        {
            ans.push_back(count(i));
        }
        return ans;
    }
};
