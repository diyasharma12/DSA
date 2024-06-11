string preToInfix(string pre_exp) {
        stack<string> st;
        for (int i = pre_exp.size() - 1; i >= 0; i--) {
            char c = pre_exp[i];
            if (c == '+' || c == '-' || c == '*' || c == '/') {
                string op1 = st.top(); st.pop();
                string op2 = st.top(); st.pop();
                string temp = "(" + op1 + c + op2 + ")";
                st.push(temp);
            }
            else {
                st.push(string(1, c));
            }
        }
        return st.top();
    }
