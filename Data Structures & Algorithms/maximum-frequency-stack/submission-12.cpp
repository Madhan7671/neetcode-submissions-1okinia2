class FreqStack {
public:
    FreqStack() {
        
    }
    unordered_map<int,int>freq;
    unordered_map<int,vector<int>>mp;
    int maxfreq=0;
    void push(int val) {
        freq[val]++;
        maxfreq=max(maxfreq,freq[val]);
        mp[freq[val]].push_back(val);
    }
    
    int pop() {
        int ans=mp[maxfreq].back();
        mp[maxfreq].pop_back();
        freq[ans]--;
        if(mp[maxfreq].empty()){
            maxfreq--;
        }
        return ans;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */