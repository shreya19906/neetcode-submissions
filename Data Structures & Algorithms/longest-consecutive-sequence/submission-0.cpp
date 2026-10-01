class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numset (nums.begin(), nums.end());
        int maxLen = 0;
        for(auto it: numset) {
            if(numset.find(it - 1) == numset.end()) {
                int len = 1;
                while (numset.find(it+len) != numset.end()) len++;
                maxLen = max(maxLen, len);
            }
        }
        return maxLen;
    }
};
