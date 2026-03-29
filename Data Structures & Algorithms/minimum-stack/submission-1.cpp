class Node{
    public:
        int curr;
        int minEl;
};

class MinStack {
public:
    stack<Node> st;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            st.push({val,val});
        }
        else{
            int minEle = min(val, st.top().minEl);
            st.push({val, minEle});
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().curr;
    }
    
    int getMin() {
        return st.top().minEl;
    }
};
