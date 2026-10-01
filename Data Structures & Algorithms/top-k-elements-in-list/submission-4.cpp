class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(auto num: nums) 
            mp[num] = mp[num] + 1;
    
        priority_queue<pair<int,int>, vector<pair<int, int>>, std::greater<pair<int,int>>> pq;
        for(auto it: mp) {
            pq.push(pair<int, int>(it.second, it.first));
            if(pq.size()>k) pq.pop();
        }

        vector<int> ans;
        while(pq.size()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
