class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size();
        if(n%groupSize!=0)
        {
            return false;
        }
        map<int,int>mp;
        for(int i:hand)
        {
            mp[i]++;
        }
        for(auto& it:mp)
        {
            int start=it.first;
            while(mp[start]>0)
            {
                for(int i=0;i<groupSize;i++)
                {
                    if(mp[start+i]<=0)
                    {
                        return false;
                    }
                    mp[start+i]--;
                }
            }
        }
        return true;
    }
};
