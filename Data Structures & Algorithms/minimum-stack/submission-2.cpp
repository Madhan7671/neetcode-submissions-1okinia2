class MinStack {
public:
    MinStack() {
        
    }
    stack<int>s1;
    void push(int val) {
        s1.push(val);
    }
    
    void pop() {
        s1.pop();
    }
    
    int top() {
        return(s1.top());
    }
    
    int getMin() {
        stack<int>s2;
        int ans=INT_MAX;
        while(!s1.empty())
        {
            ans=min(ans,s1.top());
            s2.push(s1.top());
            s1.pop();
        }
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        return ans;
    }
};
