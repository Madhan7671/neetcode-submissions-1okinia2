class MinStack {
public:
    MinStack() {
        
    }
    stack<int>st,s2;
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
        int res=INT_MAX;
        while(!st.empty()){
            res=min(res,st.top());
            s2.push(st.top());
            st.pop();
        }
        while(!s2.empty())
        {
            st.push(s2.top());
            s2.pop();
        }
        return res;
    }
};
