class MinStack {
public:
    stack<int> st;
    int min=INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(val<min) min=val;
    }
    
    void pop() {
        st.pop();
        
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        stack<int> tmp;
        int mini = st.top();
        while (st.size()) {
            mini = std::min(mini, st.top());
            tmp.push(st.top());
            st.pop();
        }

        while (tmp.size()) {
            st.push(tmp.top());
            tmp.pop();
        }

        return mini;
    }
};
