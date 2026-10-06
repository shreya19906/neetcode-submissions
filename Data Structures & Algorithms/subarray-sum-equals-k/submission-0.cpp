class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_multimap<int, int> mp;
        mp.insert({0,0});
        int currSum = 0;
     for(int i = 0; i< nums.size(); i++)   
        {
            currSum = currSum + nums[i];
            mp.insert({currSum, i+1});
        }

    currSum = 0;
    int count = 0;
    for(int i =0;i<nums.size();i++) {
        currSum = currSum + nums[i];
        int complement = currSum - k;
        auto range = mp.equal_range(complement);
            for(auto it = range.first; it!=range.second; ++it) {
                if(it->second <= i)
                    count ++;
            }
    }
    return count;
    }
};