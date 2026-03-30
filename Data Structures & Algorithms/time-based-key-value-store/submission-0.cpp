class TimeMap {
public:
unordered_map<string,map<int,string>>mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].insert({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        string ans="";
        if(mp.find(key)==mp.end())
        {
            return "";
        }
        for(auto& i:mp[key])
        {
            int temp=i.first;
            string p=i.second;
            if(temp<=timestamp)
            {
                ans=p;
            }
            else{
                break;
            }
        }
        return ans;
    }
};
