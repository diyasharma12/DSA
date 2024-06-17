class Solution{
public:

    vector<int> count_NGE(int n, vector<int> &arr, int queries, vector<int> &indices){
        vector<int> ans(queries);
        for(int i = 0; i<queries; i++){
            int curr = arr[indices[i]];
            stack<int> st;
            int r = n-1;
            while(r > indices[i]){
                if(arr[r] > curr){
                    
                    st.push(arr[r]);
                }
                r--;
            }
            ans[i] = st.size();
        }
        return ans;
    }

};
