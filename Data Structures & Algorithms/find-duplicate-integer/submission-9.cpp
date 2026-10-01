class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int n : nums) {
            if(nums[abs(n)-1] < 0)
                return abs(n);
            else 
                nums[abs(n)-1] = -nums[abs(n)-1];
        }
        return 0;
    }
};
