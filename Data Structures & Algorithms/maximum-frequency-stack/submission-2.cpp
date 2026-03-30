class FreqStack {
public:
    FreqStack() {
        
    }
    unordered_map<int,int>mp1;
    unordered_map<int,stack<int>>mp2;
    int maxfreq=INT_MIN;
    void push(int val) {
        mp1[val]++;
        maxfreq=max(maxfreq,mp1[val]);
        mp2[mp1[val]].push(val);
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