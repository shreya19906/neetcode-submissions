class Solution {
public:
    int search(vector<int>& nums, int target) {
        // if(nums.size() == 1) { return target == nums[0] ? 0 : -1;  };
        int r = nums.size()-1, l = 0;
        while(l <= r) {
           int mid = l + floor(r - l)/2;
           if( target < nums[mid]) {
            r = mid -1;
           } else if(target > nums[mid])
            l = mid + 1;
            else
         return mid;
        }
        return -1;
    }
};
