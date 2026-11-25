class TimeMap {
public:
    TimeMap() {
        
    }
    unordered_map<string,vector<pair<int,string>>>mp;
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        auto& arr=mp[key];
        int left=0;
        string ans="";
        int right=arr.size()-1;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(arr[mid].first<=timestamp)
            {
                ans=arr[mid].second;
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return ans;
    }
};
