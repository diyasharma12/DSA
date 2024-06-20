string removeKdigits(string num, int k) {
        stack<char> st;
        for(int i = 0; i < num.size(); i++) {
            while(!st.empty() && k > 0 && st.top() > num[i]) {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(k > 0 && !st.empty()) {
            st.pop();
            k--;
        }
        std::string ans;
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        std::reverse(ans.begin(), ans.end());
        int nonZeroIndex = 0;
        while(nonZeroIndex < ans.size() && ans[nonZeroIndex] == '0') {
            nonZeroIndex++;
        }
        ans = ans.substr(nonZeroIndex);

        return ans.empty() ? "0" : ans;
    } 
