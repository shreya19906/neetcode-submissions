class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int left = 0, right = n-1;
        int area = 0;
        while(left < right) {
            area = max(area, min(heights[right], heights[left])*(right-left));
            if(heights[left] > heights[right]) right--;
            else if (heights[left] < heights[right]) left++;
            else {
                left ++;
                right --;
            }
        }
        return area;
    }
};
