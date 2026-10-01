class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() < 1) return 0;
       set<int> s;
       for(auto it: nums)
          s.insert(it);
        nums = {};
        for(auto it: s)
         nums.push_back(it);
       for(auto it: nums)
       cout<<" "<<it;
       cout<<endl;
       int count = 1;
       int max = count;
       int index = 0;
       while(index < nums.size() - 1) {
        count = 1;
        cout<<"index "<<index<<endl;
          while((index < nums.size() - 1) && (nums[index] + 1 == nums[index+1])) {
            count++;
            index++;
          }
          if(count > max) max = count;
           index++;
       }
        return max;
    }
};
