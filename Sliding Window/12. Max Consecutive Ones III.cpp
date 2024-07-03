//generate all the subarray and find the longest subarray with k zeros

int longestOnes(vector<int>& nums, int k) {
        int left=0,right=0, maxLength=0,zeros=0;
        int n=nums.size();
        while(right<n){
            if(nums[right]==0) zeros+=1;
            if(zeros>k){
                if(nums[left]==0)zeros--;
                left++;
            }
            if(zeros<=k){
                maxLength=max(right-left+1,maxLength);
            }
            right++;
        }
        return maxLength;
    }
