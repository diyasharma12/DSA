class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        int n=nums.size();
        if(n%k!=0)return false;
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        for(int i=0;i<n;i++){
            if(mp[nums[i]]>n/k)return false;
        }
        return true;
    }
};©leetcode
