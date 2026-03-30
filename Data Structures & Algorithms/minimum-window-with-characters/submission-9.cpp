class Solution {
public:
    string minWindow(string s, string t) {
        int left=0;
        int right=0;
        int index=-1;
        int ans=INT_MAX;
        unordered_map<char,int>mp;
        int total=t.size();
        for(char ch:t)
        {
            mp[ch]++;
        }
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
        return(index==-1?"":s.substr(index,ans));
    }
};
