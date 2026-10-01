class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
     for(int i =0;i<nums.size();i++)
      if(nums[i] == val)
        nums[i]=INT_MAX;
     
     sort(nums.begin(), nums.end());
     int i = 0;
     while(i<nums.size()) {
       if(nums[i]==INT_MAX) break;
        i++;
     }
     return i;
         

    }
};