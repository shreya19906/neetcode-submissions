class Solution {
public:
    int binarySearch(vector<int> &numbers, int target, int left , int right) {   
        int l = 0, r = right -left + 1;
        int mid;
        while(l!=r) {
            mid = l + floor(r-l)/2;
            cout<<"mid "<<mid<<" number "<<numbers[mid]<<" target "<<target<<endl;
            if(target == numbers[mid]) {
                return mid;
            }
            else if(target > numbers[mid]) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        return -1;
       
    }
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        for(int i =0;i<nums.size(); i++) {
            int index = binarySearch(nums, target - nums[i], 0, i < 1 ? 0 : i -1);
            // cout<<index;
            if(index!=-1) {
                ans[0] = index + 1;
                ans[1]= i + 1;
            }
        } 
          //cout<<binarySearch(nums, target - 4, 0, 1);  
        return ans;
    }
};
