class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> temp(n, 0);
        stack<pair<int, int>> st;
        st.push(pair<int,int> (temperatures[0], 0));
        for(int i =1;i<n;i++) {
            if(st.size() && temperatures[i] <= st.top().first) {st.push(pair<int,int>(temperatures[i], i)); continue;};
            while( st.size() && temperatures[i] > st.top().first) {
                auto it = st.top();
                temp[it.second] = i - it.second;
                st.pop();
            }
            st.push(pair<int,int>(temperatures[i], i));

        }
        return temp;
        
    }
};
