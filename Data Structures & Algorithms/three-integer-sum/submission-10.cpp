class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i =0;i<n-2;i++) {
            if(i>0 && nums[i]==nums[i-1]) continue;
            int left = i+1, right = n-1;
            while(left<right && left>=0) {
                int sum = nums[i]+nums[left]+nums[right];
                if(sum == 0) {
                    vector<int> p;
                    p = {nums[i], nums[left], nums[right]};
                    ans.push_back(p);
                    p = {};
                    left++;
                    while(left<right && nums[left]==nums[left-1]) left++;
                    
                } else if (sum > 0) {
                    right--;
                } else if(sum < 0)
                    left++;

            }
        }
        return ans;
    }
};
