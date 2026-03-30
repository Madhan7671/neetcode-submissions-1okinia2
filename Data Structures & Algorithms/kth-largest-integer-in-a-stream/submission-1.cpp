class KthLargest {
public:
vector<int>arr;
int n;
    KthLargest(int k, vector<int>& nums) {
        arr=nums;
        n=k;
    }
    
    int add(int val) {
        arr.push_back(val);
        sort(arr.rbegin(),arr.rend());
        return(arr[n-1]);
    }
};
