class MinStack {
public:
stack<int>st;
    MinStack() {
        
    }
    
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
        stack<int>s2;
        int mini=st.top();
        while(!st.empty())
        {
            mini=min(mini,st.top());
            s2.push(st.top());
            st.pop();
        }
        while(!s2.empty())
        {
            st.push(s2.top());
            s2.pop();
        }
        return(mini);
    }
};
