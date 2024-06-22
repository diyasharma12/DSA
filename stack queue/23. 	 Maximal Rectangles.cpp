class Solution {
public:
    int largestRectangle(vector<int>& histo) {
        stack<int> st;
        int maxi = 0;
        int n = histo.size();
        for (int i = 0; i <= n; i++) {
            while (!st.empty() && (i == n || histo[st.top()] >= histo[i])) {
                int height = histo[st.top()];
                st.pop();
                int width;
                if (st.empty()) {
                    width = i;
                } else {
                    width = i - st.top() - 1;
                }
                maxi = max(maxi, height * width);
            }
            st.push(i);
        }
        return maxi;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty()) return 0;
        int maxarea = 0;
        int n = matrix.size(), m = matrix[0].size();
        vector<int> height(m, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == '1') height[j]++;
                else height[j] = 0;
            }
            int area = largestRectangle(height);
            maxarea = max(area, maxarea);
        }
        return maxarea;
    }
};
