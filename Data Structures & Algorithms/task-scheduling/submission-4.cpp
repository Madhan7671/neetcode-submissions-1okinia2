class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>freq(128,0);
        for(char i:tasks)
        {
            freq[i]++;
        }
        int max_val=*max_element(freq.begin(),freq.end());
        int maxe=count(freq.begin(),freq.end(),max_val);
        int ans=(max_val-1)*(n+1)+(maxe);
        return(max(ans,(int)tasks.size()));
    }
};
