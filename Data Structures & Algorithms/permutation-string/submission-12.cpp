class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        sort(s1.begin(),s1.end());
        for(int i=0;i<s2.size();i++)
        {
            string x=s2.substr(i,n);
            sort(x.begin(),x.end());
            if(x==s1)
            {
                return true;
            }
        }
        return false;
    }
};
