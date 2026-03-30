class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int left=0;
        int right=people.size()-1;
        int res=0;
        sort(people.begin(),people.end());
        while(left<=right)
        {
            if(people[left]+people[right]<=limit)
            {
                left++;

            }
            res++;
            right--;
        }
        return res;
    }
};