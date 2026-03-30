class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1=s1.size();
        int n2=s2.size();
        sort(s1.begin(),s1.end());
        for(int i=0;i<n2;i++)
        {
            string s=s2.substr(i,n1);
            sort(s.begin(),s.end());
            if(s==s1)
            {
                return true;
            }
        }
        return false;
    }
};
