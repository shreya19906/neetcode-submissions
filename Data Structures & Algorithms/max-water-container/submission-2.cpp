class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0; int right = heights.size()-1;
        int area = 0;
        while(left < right)
         {
            int minimum = min(heights[left], heights[right]);
            int difference = right - left;
            area = max(area, minimum*difference);
            if(heights[left] < heights[right]) left++;
            else right--;
         }
         return area;
    }
};
