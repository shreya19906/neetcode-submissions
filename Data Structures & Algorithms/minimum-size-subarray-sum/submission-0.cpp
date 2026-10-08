class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int count = INT_MAX;
        int left = 0, right = 0;
        int sum = 0;
        while(right < nums.size()) {
            sum = sum + nums[right];
            if(sum >= target) {
                while(left <= right && sum-nums[left] >= target) {
                    sum = sum-nums[left];
                    left++;
                }
                count = min(count, right-left+1);
                // left++;
                // sum = sum - nums[left];
            }
            right++;
        }
        if(count==INT_MAX) return 0;
        return count;
    }
};