class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int ans = nums[0];
        for(auto num: nums)
          {
            if(num == ans)
                count++;
            else
               count--;    
            if(count == 0)
            {ans = num;   count++;}

          }
        return ans;  
    }
};