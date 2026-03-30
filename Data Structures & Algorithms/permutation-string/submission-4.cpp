class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());
        int n1=s1.size();
        int n2=s2.size();
        for(int i=0;i<=n2-n1;i++)
        {
            string x=s2.substr(i,n1);
            sort(x.begin(),x.end());
            if(x==s1)
            {
                return true;
            }
        }
        return false;
    }
};
