class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>freq(128,0);
        for(char ch:tasks)
        {
            freq[ch]++;
        }
        int max_freq=*max_element(freq.begin(),freq.end());
        int count_max=count(freq.begin(),freq.end(),max_freq);
        int counter=(max_freq-1)*(n+1)+(count_max);
        return(max((int)tasks.size(),counter));
    }
};
