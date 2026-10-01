class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        multimap<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
            mp.insert(pair<int, int>(nums[i], i));

                for (int i = 1; i <= nums.size(); i++) {
                    mp.erase(mp.find(nums[i-1]));
                auto p = mp.find(target - nums[i - 1]);
                cout<<p->second;
                if (p != mp.end() && (p->second > (i-1)))
                    return vector<int>{i-1, p->second};
                 mp.insert(pair<int,int>(nums[i-1], i-1));
            }
             return vector<int>{0,1};
    }
   
};
