class KthLargest {
public:
priority_queue<int,vector<int>,greater<int>>pq;
int limit;
    KthLargest(int k, vector<int>& nums) {
        limit=k;
        for(int i:nums)
        {
            pq.push(i);
        }
        while(pq.size()>k)
        {
            pq.pop();
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size()>limit)
        {
            pq.pop();
        }
        return(pq.top());
    }
};
