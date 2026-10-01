class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(auto num: nums) 
            mp[num] = mp[num] + 1;
    
        map<int, vector<int>, std::greater<int>> hashmap;
        for(auto it: mp) {
            hashmap[it.second].push_back(it.first);
        }

        for(auto it: hashmap) {
            cout<<"frequency "<<it.first<<" val ";
            for(auto num: it.second)
            cout<<num<<" ";
            cout<<endl;
        }
        vector<int> ans;
        for(auto it: hashmap) {
                for(int i =0; i< it.second.size() && k > 0; i++) {
                    ans.push_back(it.second[i]);
                    k--;
        } 
            if(k==0) {return ans;};
        }
        

        return ans;
    }
};
