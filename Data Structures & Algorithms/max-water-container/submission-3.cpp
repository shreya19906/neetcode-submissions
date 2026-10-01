class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxArea = 0;
        int l = 0, r =heights.size()-1;
        while(l < r) {
            maxArea = max(maxArea, min(heights[r], heights[l])*(r-l));
            if(heights[r] < heights[l])
                r--;
                else
                l++;
            
        }
        return maxArea;
    }
};
