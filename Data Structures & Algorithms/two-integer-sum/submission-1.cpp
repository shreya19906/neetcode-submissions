class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        vector<int> ans;
        for(int i =0;i<nums.size();i++) {
            auto pr = mp.find(target - nums[i]);
            if(pr == mp.end()) {  
                mp[nums[i]] = i;
            }
            else if(pr!=mp.end() && mp[target - nums[i]] < i) {
                ans = {mp[target - nums[i]], i};
                return ans;
            }
        }
        return ans;
    }
};
