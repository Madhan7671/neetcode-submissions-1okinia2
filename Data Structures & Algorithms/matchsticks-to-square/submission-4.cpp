class Solution {
public:
bool fn(int index,vector<int>match,vector<int> sides,int target)
{
    if(index==match.size())
    {
        return(sides[1]==target && sides[2]==target && sides[0]==target && sides[3]==target);
    }
    for(int i=0;i<4;i++)
    {
        if(sides[i]+match[index]>target)
        {
            continue;
        }
        sides[i]+=match[index];
        if(fn(index+1,match,sides,target))
        {
            return true;
        }
        sides[i]-=match[index];
    }
    return false;
}
    bool makesquare(vector<int>& matchsticks) {
        int sum=0;
        for(int i:matchsticks)
        {
            sum+=i;
        }
        if(sum%4!=0)
        {
            return false;
        }
        int target=sum/4;
        vector<int>sides(4,0);
        sort(matchsticks.rbegin(),matchsticks.rend());
        return(fn(0,matchsticks,sides,target));
    }
};