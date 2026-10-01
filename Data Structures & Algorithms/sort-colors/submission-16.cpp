class Solution {
public:
    void sortColors(vector<int>& nums) {
        int mid=0, l=0, r = nums.size()-1;
        while(mid<=r) {
            if(nums[mid]==2) {
                   swap(nums[mid], nums[r]);
                   r--; 
            }
            else if(nums[mid]==0) {
                swap(nums[mid], nums[l]);
                l++;
                mid++;
            } else
                mid++;
        }
    }
};