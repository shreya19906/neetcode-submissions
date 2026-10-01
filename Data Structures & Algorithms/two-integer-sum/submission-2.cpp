class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      map<int,int> mp;
        vector<int> ans;
      for(int i =0;i<nums.size();i++)
         {

            if(mp.find(target - nums[i])!= mp.end()) {
              
                ans.push_back(mp.find(target - nums[i])->second);
                ans.push_back(i);
                return ans;
            }
            else 
              {
                mp.insert(pair<int,int>(nums[i],i));
              }

         }
         return ans;
    }
};
