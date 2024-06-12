vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       vector<int>ans(nums1.size(),-1);
       stack<int>st;
       map<int,int>mpp;
       for(int i=0;i<nums2.size();i++){
        while(!st.empty()&&st.top()<nums2[i]){
            mpp[st.top()]=nums2[i];
            st.pop();
        }
        st.push(nums2[i]);
       } 
       for(int i=0;i<nums1.size();i++){
        if(mpp[nums1[i]]){
            ans[i]=mpp[nums1[i]];
        }
       }
       return ans;
    }
