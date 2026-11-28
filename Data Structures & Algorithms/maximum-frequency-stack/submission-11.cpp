class FreqStack {
public:
unordered_map<int,int>freq;
unordered_map<int,vector<int>>mp;
int maxfreq=0;
    FreqStack() {
        
    }
    
    void push(int val) {
        freq[val]++;
        maxfreq=max(maxfreq,freq[val]);
        mp[freq[val]].push_back(val);
    }
    
    int pop() {
        int val=mp[maxfreq].back();
        mp[maxfreq].pop_back();
        freq[val]--;
        if(mp[maxfreq].empty()){
            maxfreq--;
        }
        return val;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */