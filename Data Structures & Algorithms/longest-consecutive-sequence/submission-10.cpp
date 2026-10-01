class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxCount = 0;
        unordered_set<int> st;
        for(auto it: nums)
        st.insert(it);
        int i = 0;
        for(int i =0;i<nums.size() && nums.size(); i++)
            {
                int count = 1;
                int n = nums[i]-1;
                while(st.find(n)!=st.end()) {

                    count++;
                    st.erase(st.find(n));
                    n--;
                }
                    n = nums[i]+1;
                 while(st.find(n)!=st.end()) {
                    count++;
                    st.erase(st.find(n));
                    n++;
                }
                maxCount = max(count, maxCount);
            }
        return maxCount;    
    }
};
