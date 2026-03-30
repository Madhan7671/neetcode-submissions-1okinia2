class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp;
        for(char ch:t)
        {
            mp[ch]++;
        }
        int n=s.size();
        int high=0;
        int low=0;
        int ans=INT_MAX;
        int index=-1;
        int total=t.size();
        while(high<n)
        {
            mp[s[high]]--;
            if(mp[s[high]]>=0)
            {
                total--;
            }
            while(!total && low<=high)
            {
                if(ans>high-low+1)
                {
                    ans=high-low+1;
                    index=low;
                }
                mp[s[low]]++;
                if(mp[s[low]]>0)
                {
                    total++;
                }
                low++;
            }
            high++;
        }
        return(index==-1?"":s.substr(index,ans));
    }
};
