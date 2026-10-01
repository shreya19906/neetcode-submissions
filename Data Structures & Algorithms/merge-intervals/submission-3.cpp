class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        stack<vector<int>> st;
        vector<vector<int>> ans;
        for(int i = intervals.size()-1; i>=0; i--)
            st.push(intervals[i]);

        while(st.size() > 1) {
            vector<int> item1 = st.top(); st.pop();
            vector<int> item2 = st.top(); st.pop();
            if(item1[1] >= item2[0])
                {
                    // merge and push on stack
                    st.push({min(item1[0], item2[0]), max(item1[1],item2[1])});
                }
             else {
                ans.push_back(item1);
                st.push(item2);
             }   
            
        }
        ans.push_back(st.top());    
        return ans;
    }
};
