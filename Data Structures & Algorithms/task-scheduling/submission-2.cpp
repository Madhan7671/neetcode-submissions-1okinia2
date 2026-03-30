class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>frq(128,0);
        for(char ch:tasks)
        {
            frq[ch]++;
        }
        int max_freq=*max_element(frq.begin(),frq.end());
        int count_max=count(frq.begin(),frq.end(),max_freq);
        int counter=(max_freq-1)*(n+1)+count_max;
        return(max((int)tasks.size(),counter));
    }
};
