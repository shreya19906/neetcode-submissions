class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> lookup;
        vector<int> ans;
        for(int i =0;i<nums.size(); i++)
            {
                if(lookup.find(target-nums[i])!=lookup.end())
                    {
                        ans = {lookup[target-nums[i]], i};
                        return ans;
                    } else 
                    lookup[nums[i]]=i;
            }
        return ans;
    }
};
