class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>freq(128,0);
        for(char ch:tasks)
        {
            freq[ch]++;
        }
        int max_ele=*max_element(freq.begin(),freq.end());
        int count_max=count(freq.begin(),freq.end(),max_ele);
        int ans=(max_ele-1)*(n+1)+count_max;
        return(max((int)tasks.size(),ans));
    }
};
