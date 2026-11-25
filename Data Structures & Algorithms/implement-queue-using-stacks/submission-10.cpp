class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int>st1,st2;
    void push(int x) {
        st2.push(x);
    }
    
    int pop() {
        while(!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
        int a=st1.top();
        st1.pop();
        while(!st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }
        return a;
    }
    
    int peek() {
        while(!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
        int a=st1.top();
        while(!st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }
        return a;
    }
    
    bool empty() {
        return(st2.empty());
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */