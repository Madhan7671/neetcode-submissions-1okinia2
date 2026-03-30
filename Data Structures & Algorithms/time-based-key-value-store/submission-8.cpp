class TimeMap {
public:
    TimeMap() {
        
    }
    unordered_map<string,vector<pair<int,string>>>mp;
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        string ans="";
        int low=0;
        auto& arr=mp[key];
        int high=arr.size()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid].first<=timestamp)
            {
                ans=arr[mid].second;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};
