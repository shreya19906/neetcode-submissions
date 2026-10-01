class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeroCount = 0;
        vector<int> ans(nums.size(), 0);
        int product = 1;
        int index;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                zeroCount++;
                index = i;
            } else
                product = product * nums[i];
        }
        if (zeroCount > 1) {
            return ans;
        }
        if (zeroCount == 1) {
            ans[index] = product;
            return ans;
        }
        for (int i = 0; i < nums.size(); i++) ans[i] = product / nums[i];
        return ans;
    }
};
