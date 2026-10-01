class Solution {
public:
    vector<int> mergeSort(vector<int>& nums1, vector<int>& nums2) {
        int i =0, j=0;
        vector<int> ans;
        while(i < nums1.size() && j<nums2.size()) {
            if(nums1[i] <= nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
                
            } else {
                ans.push_back(nums2[j]);
                j++;
            }
        }

        while(i<nums1.size())  {
              ans.push_back(nums1[i]);
              i++;
        }
        
        while(j < nums2.size()) {
                ans.push_back(nums2[j]);
                j++;
        }
        return ans;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() + nums2.size();
        double ans = 0;
        vector<int> nums = mergeSort(nums1,nums2);
       if(n > 1 && n%2 == 0) {
            return static_cast<double> (nums[n/2 - 1] + nums[n/2])/2;
       } else if (n > 1) {
        return nums[n/2];
       }
       return nums[0];
    }
};
