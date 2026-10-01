class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(auto it: nums)
        mp[it]++;
        
       vector<vector<int>> arr(nums.size()+1);
        for(auto &entry: mp)
            arr[entry.second].push_back(entry.first);

        vector<int> ans;
        
        int i = nums.size();

        while(ans.size() < k && i >= 0) {
            if(arr[i].size()) {
                int j = 0;
                while(ans.size() < k && j < arr[i].size())
                {
                    ans.push_back(arr[i][j]);
                    j++;
                }
            }
            i--;

            // if(arr[i]) ans.push_back(arr[i]);
            // i--;
        }
        return ans;
    }
};
