class MinStack {
    stack<int> st;
    stack<int> min;
    public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(!min.size() || val <= min.top())
        { min.push(val); }   
       st.push(val);
    }
    
    void pop() {
        if(min.size() && st.top() == min.top()) {
            min.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min.size() ? min.top() : INT_MAX ;
    }
};
