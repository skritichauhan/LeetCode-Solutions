class MinStack {
public:
    /** initialize your data structure here. */
    stack<int>st;
    int min;
    MinStack() {
        
    }
    
    void push(int x) {
        if (st.empty())
            min=INT_MAX;
        if(x<min)
            min=x;
        st.push(x);
        st.push(min);
        
    }
    
    void pop() {
        st.pop();
        st.pop();
        if(!st.empty())
            min=st.top();
    }
    
    int top() {
        st.pop();
        int t=st.top();
        st.push(min);
        return t;
    }
    
    int getMin() {
        if(st.empty())
            return -1;
        return st.top();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
