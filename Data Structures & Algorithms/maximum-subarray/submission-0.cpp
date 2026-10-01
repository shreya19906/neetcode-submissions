class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int sum = nums[0];
        for(int i =1; i<nums.size();i++){
            if(nums[i]+sum <= nums[i])
               sum = nums[i];
            else
                sum = sum + nums[i];
            maxSum = max(sum, maxSum);
        }
        return maxSum;
    }
};
