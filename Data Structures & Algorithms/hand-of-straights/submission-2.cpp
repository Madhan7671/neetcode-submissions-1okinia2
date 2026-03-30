class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int>mp;
        for(int i:hand)
        {
            mp[i]++;
        }
        if(hand.size()%groupSize !=0)
        {
            return false;
        }
        for(auto& i:mp)
        {
            int start=i.first;
            while(mp[start]>0)
            {
                for(int j=0;j<groupSize;j++)
                {
                    if(mp[start+j] <=0)
                    {
                        return false;
                    }
                    mp[start+j]--;
                }
            }
        }
        return true;
    }
};
