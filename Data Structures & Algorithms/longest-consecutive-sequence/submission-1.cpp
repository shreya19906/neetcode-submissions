class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numset (nums.begin(), nums.end());
        int maxLen = 0;
        for(auto it: numset) {
            int len = 1;
            int num = it;
            while(numset.find(num - 1)!=numset.end()) {
                 cout<<"it "<<it<<" ";

               num--;
               len++;
            }
            if(len > maxLen) maxLen = len;
        }
      return maxLen;
    }
};
