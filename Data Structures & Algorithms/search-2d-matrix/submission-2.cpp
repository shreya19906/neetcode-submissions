class Solution {
public:
    int binarySearch(vector<int> v, int target) {
        int r = v.size()-1;
        int l = 0;
        int mid = 0;
        while(l<=r) {
            mid = l + ((r-l)/2);
            if(target < v[mid]) r = mid-1;
            else if(target > v[mid]) l = mid + 1;
            else 
            return mid;
        }
        return v[mid] > target && mid > 0 ? (mid -1) : mid;
    } 
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int rowSize = matrix.size();
      vector<int> vt;
      for(int i =0;i<rowSize;i++)
        vt.push_back(matrix[i][0]);
       int rowIndex = binarySearch(vt, target);
       if(matrix[rowIndex][0] == target) return true;
       vt = {};
       cout<<"row "<<rowIndex<<endl;
       for(int i =0;i < matrix[rowIndex].size();i++) {
        vt.push_back(matrix[rowIndex][i]);
       }
       int colIndex = binarySearch(vt, target);
       cout<<"col "<<colIndex<<endl;
       if(matrix[rowIndex][colIndex] == target) {
        return true;
       } else return false;
    }
};
