class MedianFinder {
vector<int>ans;
public:

    MedianFinder() {
        
    }
    
    void addNum(int num) {
        ans.push_back(num);
    }
    
    double findMedian() {
        sort(ans.begin(),ans.end());
        int n=ans.size();
        if(n&1)
        {
            return(ans[n/2]);
        }
        else{
            return((ans[n/2]+ans[n/2-1])/2.0);
        }
    }
};
