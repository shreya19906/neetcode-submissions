class TimeMap {
public:
    map<string, vector<pair<int, string>>> myMap;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        if(this->myMap.find(key)!=this->myMap.end()) {
            this->myMap[key].push_back(pair<int, string>(timestamp, value));
        } else {
            std::vector<pair<int, string>> vt;
             vt.push_back(pair<int, string>(timestamp, value));
            this->myMap[key] = vt;
        }
    }
    
    string get(string key, int timestamp) {
        if(this->myMap.find(key)!=this->myMap.end()) {
            vector<pair<int, string>> vt = myMap[key];
            int l = 0, r=vt.size()-1;
            int mid = 0;
            while(l<=r) {
                 mid = l + (r-l)/2;
                if(vt[mid].first == timestamp) return vt[mid].second;
                if(vt[mid].first < timestamp) l = mid+1;
                else { r=mid-1; } 
            }
            if(vt[mid].first > timestamp && mid!=0) return vt[mid-1].second;
            if(vt[mid].first > timestamp) return ""; 
            return vt[mid].second;
            // if(mid != 0) return vt[mid-1].second; else return "";
        } else return "";
    }
};
