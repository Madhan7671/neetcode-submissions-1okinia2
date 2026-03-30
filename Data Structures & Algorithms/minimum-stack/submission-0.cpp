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
        int mini=st.top();
        stack<int>temp;
        while(st.size())
        {
            mini=min(mini,st.top());
            temp.push(st.top());
            st.pop();
        }
        while(temp.size())
        {
            st.push(temp.top());
            temp.pop();
        }
        return(mini);
    }
};
