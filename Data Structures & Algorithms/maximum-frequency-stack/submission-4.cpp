class FreqStack {
public:
    FreqStack() {
        
    }
    int maxe=INT_MIN;
    unordered_map<int,int>mp1;
    unordered_map<int,stack<int>>mp2;
    void push(int val) {
        mp1[val]++;
        maxe=max(maxe,mp1[val]);
        mp2[mp1[val]].push(val);
    }
    
    int pop() {
        int a=mp2[maxe].top();
        mp2[maxe].pop();
        mp1[a]--;
        if(mp2[maxe].empty())
        {
            maxe--;
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