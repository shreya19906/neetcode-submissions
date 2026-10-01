class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i =0;i<n-2;i++) {
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j = i+1, k = n-1;
            while(j<k && j>=0) {
                int sum = nums[i]+nums[j]+nums[k];
                if(sum == 0) {
                    vector<int> p;
                    p = {nums[i], nums[j], nums[k]};
                    ans.push_back(p);
                    p = {};
                    j++;
                    while(j<k && nums[j]==nums[j-1]) j++;
                    
                } else if (sum > 0) {
                    k--;
                } else if(sum < 0)
                    j++;

            }
        }
        return ans;
    }
};
