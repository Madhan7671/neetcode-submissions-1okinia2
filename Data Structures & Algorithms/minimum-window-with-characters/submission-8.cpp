class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp;
        int  n=s.size();
        for(char ch:t)
        {
            mp[ch]++;
        }
        int left=0;
        int right=0;
        int index=-1;
        int ans=INT_MAX;
        int total=t.size();
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
