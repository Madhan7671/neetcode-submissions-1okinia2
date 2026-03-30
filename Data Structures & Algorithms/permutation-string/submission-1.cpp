class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());
        int n=s2.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                string x=s2.substr(i,j-i+1);
                sort(x.begin(),x.end());
                if(x==s1)
                {
                    return true;
                }
            }
        }
        return false;
    }
};
