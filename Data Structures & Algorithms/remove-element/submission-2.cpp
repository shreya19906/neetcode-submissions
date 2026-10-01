class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
     int i = 0, j = nums.size()-1;
     while(i<=j) {
      if(nums[i] == val)
        {
          while(i < j && nums[j]==val)
                j--;
          if(i>=j)
           break;
           else
            {
              int temp = nums[i];
              nums[i]=nums[j];
              nums[j]=temp;
            } 
               
        }
        i++;  
     }
     return i;
    }
};