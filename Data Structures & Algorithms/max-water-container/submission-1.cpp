class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int area = 0;
        int right = n-1;
        int left  = 0;
        while(left < right) {
            area = max (area, min(heights[left], heights[right]) * (right-left));
            if(heights[left] < heights[right])
              left ++;
              else
              right --;
        }
        return area;
    }
};
