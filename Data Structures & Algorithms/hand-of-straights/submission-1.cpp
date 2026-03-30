class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupsize) {
        map<int,int>mp; 
        int n=hand.size();
        if(n%groupsize!=0)
        {
            return false;
        }
        for(int i:hand)
        {
            mp[i]++;
        }
       
        
        for(auto& i:mp)
        {
            int start=i.first;
            while(mp[start]>0)
            {
                for(int i=0;i<groupsize;i++)
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
