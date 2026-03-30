class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp;
        for(char ch:t)
        {
            mp[ch]++;
        }
        int low=0;
        int high=0;
        int total=t.size();
        int n=s.size();
        int ans=INT_MAX;
        int index=-1;
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
        return (index==-1?"":s.substr(index,ans));
    }
};
