class MinStack {
public:
    vector <int> st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push_back(val);
    }
    
    void pop() {
        if (!st.empty()) {
            st.pop_back();
        }
    }
    
    int top() {
        if (!st.empty()) {
            return st.back();
        }
        return -1;
    }
    
    int getMin() {
        return *min_element(st.begin(), st.end());
    }
};
