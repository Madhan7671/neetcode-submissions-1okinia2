class Solution {
public:
    string minWindow(string s, string t) {
        int index=-1;
        unordered_map<char,int>mp;
        for(int i:t)
        {
            mp[i]++;
        }
        int left=0;
        int right=0;
        int ans=INT_MAX;
        int total=t.size();
        int n=s.size();
        while(right<n)
        {
            mp[s[right]]--;
            if(mp[s[right]]>=0)
            {
                total--;
            }
            while(!total && left<=right){
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
