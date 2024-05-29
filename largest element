//brute force
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        sort(arr.begin(),arr.end());
        return arr[n-1];
    }
};


//optimal
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int maxe=0;
        for(int i=0;i<n;i++){
            maxe=max(maxe,arr[i]);
        }
        return maxe;
    }
};
