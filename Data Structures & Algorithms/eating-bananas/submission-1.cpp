class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxSpeed = *max_element(piles.begin(), piles.end());
        int left = 1;
        int right = maxSpeed;
        int ans = maxSpeed;

        while(left <=right) {
            int speed = (left+right)/2;
            double totalTime = 0;
            for(auto pile: piles) 
                totalTime  = totalTime + ceil(static_cast<double>(pile) / speed);
            if(totalTime <= h)
               { 
                   ans =  speed;
                   right = speed - 1;
               }
            else 
                left = speed + 1;
        }
        return ans;
    }
};
