class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int k = 0; k < nums.size(); k++)
        {
            if(k > 0 && nums[k]==nums[k-1])
             continue;

            int l = k+1, r = nums.size()-1;
            int sum;
            while(l<r) {
                sum = nums[l]+nums[k]+nums[r];
                if(sum == 0) {
                    ans.push_back({nums[l], nums[k], nums[r]});
                    l++;
                    r--;
                    while(l < r && nums[l]==nums[l-1])
                    l++;
                    while(l < r && nums[r] == nums[r+1])
                    r--;
                }
                else if(sum < 0)
                 l++;
                 else 
                 r--;
            }

        }
        return ans;
    }
};
