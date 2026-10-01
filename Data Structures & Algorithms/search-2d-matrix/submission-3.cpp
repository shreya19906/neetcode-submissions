class Solution {
public:
    bool binarySearch(int left , int right, int target, vector<int>& num) {
        while(left <= right) {
            int mid = left + ((right - left)/2);
            if(num[mid] > target) right = mid -1;
            else if(num[mid] < target) left = mid + 1;
            else
            return true;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        for(auto it: matrix) {
            if(binarySearch(0, it.size(), target, it)) return true;
        }
        return false;
    }
};
