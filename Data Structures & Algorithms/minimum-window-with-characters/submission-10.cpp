class Solution {
public:
    string minWindow(string s, string t) {
        int left=0;
        int right=0;
        int n=s.size();
        int index=-1;
        int ans=INT_MAX;
        unordered_map<char,int>mp;
        int total=t.size();
        for(char ch:t)
        {
            mp[ch]++;
        }
        while(right<n)
        {
            mp[s[right]]--;
            if(mp[s[right]]>=0)
            {
                total--;
            }
            while(!total && left<=right)
            {
                if(ans>(right-left+1))
                {
                    ans=right-left+1;
                    index=left;
                }
                mp[s[left]]++;
                if(mp[s[left]]>0)
                {
                    total++;
                }
                left++;
            }
            right++;
        }
        return((ans==INT_MAX)?"":s.substr(index,ans));
    }
};
