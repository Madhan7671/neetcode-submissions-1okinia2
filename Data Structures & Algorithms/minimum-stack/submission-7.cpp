class MinStack {
public:
    MinStack() {
        
    }
    stack<int>st;
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return(st.top());
    }
    
    int getMin() {
        stack<int>t;
        while(!st.empty())
        {
            t.push(st.top());
            st.pop();
        }
        int ans=INT_MAX;
        while(!t.empty())
        {
            ans=min(ans,t.top());
            st.push(t.top());
            t.pop();
        }
        return ans;
    }
};
