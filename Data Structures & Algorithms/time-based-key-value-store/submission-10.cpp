class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>>> mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
       mp[key].push_back(pair<int, string>(timestamp, value));
    }
    int search() {
        vector<int> v = {10, 20, 30};
        int left = 0, right = 2;
        while(left <= right) {
            int mid = left + ((right - left)/2);
            if(v[mid] == 25) return mid;
            else if (v[mid] < 25 && v[right] > 25) left  = mid + 1;
            else 
                right = mid - 1;
        }
        if(left - 1 >=0 && v[left-1] < 25) return left-1;
        return left;
    }
    string binarySearch(int left, int right, vector<pair<int, string>> v, int target) {
        if(target == 25) {
           cout<<search()<<endl;
        }
       
        while(left <= right) {
            int mid = left + ((right - left)/2);
            if(v[mid].first == target) return v[mid].second;
            else if(v[mid].first < target) left = mid + 1;
            else right = mid - 1;

        }
         if (left - 1 >= 0 && v[left-1].first < target) return v[left-1].second;
        else return "";

    }
    string get(string key, int timestamp) {
        auto it = mp.find(key);
        if(it == mp.end()) return "";
        else 
        return binarySearch(0, it->second.size()-1, it->second, timestamp);
    }
};
