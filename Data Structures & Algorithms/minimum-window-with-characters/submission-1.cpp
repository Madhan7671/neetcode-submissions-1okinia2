class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp;
        for(char ch:t)
        {
            mp[ch]++;
        }
        int total=t.size();
        int start=0;
        int end=0;
        int index=-1;
        int ans=INT_MAX;
        int n=s.size();
        while(end<n)
        {
            mp[s[end]]--;
            if(mp[s[end]]>=0)
            {
                total--;
            }
            while(!total && start<=end)
            {
                if(ans> end-start+1)
                {
                    ans=end-start+1;
                    index=start;
                }
                mp[s[start]]++;
                if(mp[s[start]]>0)
                {
                    total++;
                }
                start++;
            }
            end++;
        }
        return(index==-1?"":s.substr(index,ans));
    }
};
