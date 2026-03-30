class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int>mp;
        for(int i:hand)
        {
            mp[i]++;
        }
        for(auto& i:mp)
        {
            int start=i.first;
            while(mp[start]>0)
            {
                for(int i=0;i<groupSize;i++)
                {
                    if(mp[start+i] <= 0)
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
