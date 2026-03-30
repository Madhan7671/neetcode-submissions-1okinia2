class Solution {
public:
    string minWindow(string s, string t) {
        int ans=INT_MAX;
        int index=-1;
        unordered_map<char,int>mp;
        for(char ch:t)
        {
            mp[ch]++;
        }
        int total=t.size();
        int right=0;
        int left=0;
        int n=s.size();
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
