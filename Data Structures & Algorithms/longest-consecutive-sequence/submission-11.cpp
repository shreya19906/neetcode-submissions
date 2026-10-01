class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int maxCount = 0;
        for(auto it: nums)
        st.insert(it);
        for(int i =0;i<nums.size(); i++)
        {
                int count = 1;
            if(st.find(nums[i]-1) == st.end()) {
                int num = nums[i]+1;
                while(st.find(num) != st.end())
                    {count++; num++;}    
            }
        maxCount = max(count, maxCount);
        }
        return maxCount;

    }
};
