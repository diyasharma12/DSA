class MinStack {
public:
stack<long long>st;
long long mini;
    MinStack() {
        while(st.empty()==false) st.pop();
        mini =INT_MAX;
        
    }
    
    void push(int val) {
        long long v=val;
        if(st.empty()){
            mini=v;
            st.push(v);
        }
        else{
            if(v<mini){
                st.push(2*v-mini);
                mini=v;
            }
            else{
                st.push(val);
            }
        }
    }
    
    void pop() {
        if(st.empty()){
            return ;
        }
        long long el=st.top();
        st.pop();
        if(el<mini){
            mini= 2*mini-el;
        }
    }
    
    int top() {
        if(st.empty()) return -1;
        long long el=st.top();
        if(el<mini) return mini;
        return el;
    }
    
    int getMin() {
        return mini;
    }
};
