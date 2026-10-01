class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i =0;i<nums.size();i++) {
            int k = i;
            int targetSum = -1 * nums[k];
            if (nums[i] > 0) break;
            int l = i+1, r = nums.size()-1;
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            while(l < r) { 
                int sum = nums[l]+nums[r];  
                if(sum == targetSum)
                    {
                       
                        vector<int> t = {nums[l], nums[k], nums[r]};
                        ans.push_back(t);
                        l++;
                        r--;
                        while(l < r && nums[l] == t[0])
                           l++;
                        while(l < r && nums[r] == t[2])
                           r--;   
                    }
                 else if(sum > targetSum)
                    r--;
                else
                    l++;
            }
        }
        return ans;
    }
};
