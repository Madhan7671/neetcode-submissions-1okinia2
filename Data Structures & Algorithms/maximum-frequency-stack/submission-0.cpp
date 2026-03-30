class FreqStack {
public:
    FreqStack() {
        
    }
    unordered_map<int,int>mp1;
    unordered_map<int,stack<int>>mp2;
    int maxfreq=0;
    void push(int val) {
        int f=mp1[val]++;
        maxfreq=max(maxfreq,f);
        mp2[f].push(val);
    }
    int pop() {
        int a=mp2[maxfreq].top();
        mp2[maxfreq].pop();
        mp1[a]--;
        if(mp2[maxfreq].empty())
        {
            maxfreq--;
        }
        return a;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */